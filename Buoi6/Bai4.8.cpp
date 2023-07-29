#include <stdio.h>
int n;
float a[100];
int nhapN(float x[100]){
	do{
		printf("Nhap n= \n");
		scanf("%d",&n);
	}while(n<1 || n>30);
}
void nhapA(int n1,float x[100]){
	int i;
	printf("Nhap mang:\n");
	for(i = 0;i<n1;i++){
		printf("a[%d]=",i);
		scanf("%f",&x[i]);
	}
}
void hienThiTren2Dong(int n2,float g[100]){
	int i;
	printf("Dong co so duong la :");
	for(i=0;i<n2;i++){
		if(g[i]>0){
			printf(" %.2f",g[i]);
		}
	}
	printf("\nDong co so con lai trong mang la:");
	for(i=0;i<n2;i++){
		if(g[i]<=0){
			printf(" %.2f",g[i]);
		}
	}
}
void sapXepTang(int n3,float m[100]){
	int i,j,tg;
	for(i=0;i<n3;i++){
		for(j=i+1;j<n3;j++){
			if(m[i]>m[j]){
				tg = m[i];
				m[i] = m[j];
				m[j] = tg;
			}
		}
	}
	printf("\nMang sau khi dc sap xep tang :");
	for(i=0;i<n3;i++){
		printf(" %.1f",m[i]);
	}
} 
void sapXepGiam(int n4,float n[100]){
	int i,j,tg;
	for(i=0;i<n4;i++){
		for(j=i+1;j<n4;j++){
			if(n[i]<n[j]){
				tg = n[i];
				n[i] = n[j];
				n[j] = tg;
			}
		}
	}
	printf("\nMang sau khi dc sap xep giam :");
	for(i=0;i<n4;i++){
		printf(" %.1f",n[i]);
	}
}
int main(){
	nhapN(a);
	nhapA(n,a);
	hienThiTren2Dong(n,a);
	sapXepTang(n,a);
	sapXepGiam(n,a);
}
