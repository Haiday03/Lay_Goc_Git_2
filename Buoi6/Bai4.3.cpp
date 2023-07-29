#include <stdio.h>
#include <math.h>
int n;
float a[100];
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
		scanf("%f",&a[i]);
	}
}
float hamHienThi(int n2){
	printf("Mang vua nhap la:");
	for(int i=0;i<n2;i++){
		printf("a[%d]=%f\n",i,a[i]);
	}
}
void  tbcSoAm(int n3){
	float tbc,tong;
	tong = 0;
	tbc = 0;
	int count=0;
	for(int i=0;i<n3;i++){
		if(a[i]<0 && abs(a[i])>10){
			tong += a[i];
			count++;
		}
	}
	if(count>0){
		tbc = (float)tong/count;
		printf("\nTong va tbc cua cac phan tu am nho hon 10 la %f va %f",tong,tbc);
	}else{
		printf("\nK co tong va tbc cua cac so am nho hon 10 trong mang");
	}
}
void hamSapXepGiam(int n4){
	int tg;
	for(int i=0;i<n4;i++){
		for(int j= i+1;j<n4;j++){
			if(a[i]<a[j]){
		tg = a[i];
		a[i] = a[j];
		a[j] = tg;
		}
			}
}
printf("\nMang dc sap xep giam dan la:");
for(int i=0;i<n4;i++){
	printf(" %.0f",a[i]);
}
}
int main(){
	hamNhap_n();
	hamNhap_mang(n);
	hamHienThi(n);
	tbcSoAm(n);
	hamSapXepGiam(n);
}
