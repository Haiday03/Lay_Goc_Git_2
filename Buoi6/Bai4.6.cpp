#include <stdio.h>
#include <math.h>
int n;
int a[100];
void hamNhap_n(){
	do{
		printf("Nhap n=");
		scanf("%d",&n);
	}while(n<1 || n>20);
}
int hamNhap_mang(int n1){
	printf("Nhap cac phan tu cua mang:");
	for(int i=0;i<n1;i++){
		printf("\n a[%d]=",i);
		scanf("%d",&a[i]);
	}
}
float hamHienThi(int n2){
	printf("\nMang vua nhap la:");
	for(int i=0;i<n2;i++){
		printf("a[%d]=%d\n",i,a[i]);
	}
}
void hamChen(){
	int m,i;
	printf("\nNhap m=");
	scanf(" %d",&m);
	for(i =n-1;i>=1;i--){
		a[i+1] = a[i];
	}
	a[1] = m;
	n = n +1;
	printf("\nHam vua chen la: ");
	for(i = 0;i<n;i++){
		printf(" %d",a[i]);
	}
}
void hamSapXepTang(int n4){
	int tg;
	for(int i=0;i<n4;i++){
		for(int j= i+1;j<n4;j++){
			if(a[i]>a[j]){
		tg = a[i];
		a[i] = a[j];
		a[j] = tg;
		}
			}
}
printf("\nMang dc sap xep tang dan la:");
for(int i=0;i<n4;i++){
	printf(" %d",a[i]);
}
}
int main(){
	hamNhap_n();
	hamNhap_mang(n);
	hamHienThi(n);
	hamChen();
	hamSapXepTang(n);
	
} 
