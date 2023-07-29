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
void hienThiNgc(int n3,float m[100]){
	int i;
	printf("\nMang hien thi ngc lai la:");
	for(i=n3-1;i>=0;i--){
		printf(" %.1f",m[i]);
	}
}
void timLnVaNn(int n2,float g[100]){
	
		int i,j,tg;
		for(i=0;i<n2;i++){
	for(j=i+1;j<n2;j++){
		if(g[i]>g[j]){
			tg = g[i];
			g[i] = g[j];
			g[j] = tg;
		}
	}
}
printf("\nMang da sap xep tang dan la:");
for(i=0;i<n2;i++){
	printf(" %.1f",g[i]);
} 
	for(i=0;i<n2;i++){
		if(g[i] >0){
			for(j=i+1;j<n2;j++){
				if(g[i]<g[j] && g[j]>0){
					tg = g[i];
					g[i] = g[j];
					g[j] = tg;
				}
		}
	}
}
printf("\nPhan tu duong nho nhat trong mang la: %.1f",g[n2-1]);

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
printf("\nPhan tu am lon nhat la %.1f",g[0]);
}
int main(){
	nhapN(a);
	nhapA(n,a);
	hienThiNgc(n,a);
	timLnVaNn(n,a);
}
