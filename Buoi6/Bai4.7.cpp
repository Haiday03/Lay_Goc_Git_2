#include <stdio.h>
#include <math.h>
int n;
float a[100];
void hamNhap_n(){
	do{
		printf("Nhap n=");
		scanf("%d",&n);
	}while(n<1 || n>30);
}
int hamNhap_mang(int n1){
	printf("Nhap cac phan tu cua mang:");
	for(int i=0;i<n1;i++){
		printf("\n a[%d]=",i);
		scanf("%f",&a[i]);
	}
}
int timHienThi(int n2,float x[100]){
	int gtln1=0,gtnn1=0;
	float gtln = x[0];
	float gtnn = x[0];
	for(int i=0;i<n2;i++){
		if(gtln<x[i]){
			gtln = x[i];
			gtln1 = i;
		}
		if(gtnn>x[i]){
			gtnn = x[i];
			gtnn1 = i;
		}
	}
	printf("\nGia tri lon nhat va nho nhat trong mang la %f va %f",gtln,gtnn);
	printf("\nVi tri cua chung la %d va %d",gtln1,gtnn1);
} 
int main(){
	hamNhap_n();
	hamNhap_mang(n);
	timHienThi(n,a);
	
}
