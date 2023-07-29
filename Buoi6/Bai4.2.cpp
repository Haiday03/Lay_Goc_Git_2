#include <stdio.h>
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
int hamHienThi(int n2){

	printf("Mang vua nhap la:");
	for(int i=0;i<n2;i++){
		printf("a[%d]=%d\n",i,a[i]);
	}
}
int gtlnCuaMang(int n3){

	int max = a[0];
	for(int i=0;i<n3;i++){
		if(max < a[i]){
			max = a[i];
		}
	}
	printf("\Gia tri nho nhat cua mang la:%d",max);
}
int TongVaTbc(int n4){
	int count =0;
	int tong = 0;
	float tbc = 0;
	for(int i = 0;i<n4;i++){
		if(a[i]%2==0){
		tong += a[i];
		count++;
	}
}
if(count!=0){
	tbc = (float)tong/count;
}else{
	printf("\nK co so chan trong mang");
}
	printf("\nTong va tbc cua cac so chan trong mang lan luot la %d va %f",tong,tbc);
}
int main(){
	hamNhap_n();
	hamNhap_mang(n);
	hamHienThi(n);
	gtlnCuaMang(n);
	TongVaTbc(n);
}
