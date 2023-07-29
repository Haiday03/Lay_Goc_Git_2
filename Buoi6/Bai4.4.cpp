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
	printf("Mang vua nhap la:");
	for(int i=0;i<n2;i++){
		printf("a[%d]=%d\n",i,a[i]);
	}
}
void  tbcSoAm(int n3){
	float tbc;
	int tong = 0;
	tbc = 0;
	int count=0;
	for(int i=0;i<n3;i++){
		if(a[i]<0 && a[i]%2==0){
			tong += a[i];
			count++;
		}
	}
	if(count>0){
		tbc = (float)tong/count;
		printf("\ntbc cua cac phan tu am chan co trong mang la %f",tbc);
	}else{
		printf("\nK co tbc cua cac so am chan trong mang");
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
	tbcSoAm(n);
	hamSapXepTang(n);
}
