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
void hienThiMang(int n3,float m[100]){
	int i;
	printf("\nMang hien thi la:");
	for(i=0;i<n3;i++){
		printf(" %.1f",m[i]);
	}
}
void tinhVaHienThi(int n4,float n[100]){
	int i;
	float T1,T2;
	for
}
