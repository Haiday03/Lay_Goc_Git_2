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
void hamHienThiMang(int n3,float m[100]){
	int i;
	printf("\nDay so cua mang la:");
	for(i=0;i<n3;i++){
		printf(" %.1f",m[i]);
	}
}
void hienThiTren2Dong(int n2,float g[100]){
	int i,tg,j,count1,count2;
	printf("\nDong co so duong la :");
	count1 = 0;
	for(i=0;i<n2;i++){
		if(g[i]>0){
			printf(" %.2f",g[i]);
			count1++;
			}
		}
	printf("\nDay so tang cua dong duong la:");
	for(i=0;i<n2;i++){
		if(g[i] >0){
			for(j=i+1;j<n2;j++){
				if(g[i]>g[j] && g[j]>0){
					tg = g[i];
					g[i] = g[j];
					g[j] = tg;
				}
		}
	}
	for(i=0;i<n2;i++){
		if(g[i]>0){
			printf(" %.1f",g[i]);
		}
	}
	printf("\nTong so phan tu la %d",count1);
	
	printf("\nDong co so con lai trong mang la:");
	count2 = 0;
	for(i=0;i<n2;i++){
		if(g[i]<=0){
			printf(" %.2f",g[i]);
			count2++;
	}
}
	printf("\nDay so giam cua dong con lai la:");
for(i=0;i<n2;i++){
	if(g[i]<=0){
		for(j=i+1;j<n2;j++){
				if(g[i]<g[j] && g[j] < 0){
					tg = g[i];
					g[i] = g[j];
					g[j] = tg;
		   }
		}
	}
}
for(i=0;i<n2;i++){
	if(g[i]<=0){
		printf(" %.1f",g[i]);
	}
}
printf("\nTong so phan tu la %d",count2);
}
}
int main(){
	nhapN(a);
	nhapA(n,a);
	hamHienThiMang(n,a);
	hienThiTren2Dong(n,a);
}

