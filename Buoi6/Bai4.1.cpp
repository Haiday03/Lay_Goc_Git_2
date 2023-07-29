#include <stdio.h>
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
float gtnnCuaMang(int n3){

	float min = a[0];
	for(int i=0;i<n3;i++){
		if(min > a[i]){
			min = a[i];
		}
	}
	printf("\Gia tri nho nhat cua mang la:%f",min);
}
float TongVaTbc(int n4){

	float tong = 0;
	float tbc = 0;
	for(int i = 0;i<n4;i++){
		tong += a[i];
		tbc = (float)tong/n4;
	}
	printf("\nTong va tbc cua mang lan luot la %f va %f",tong,tbc);
}
int main(){
	hamNhap_n();
	hamNhap_mang(n);
	hamHienThi(n);
	gtnnCuaMang(n);
	TongVaTbc(n);
}
