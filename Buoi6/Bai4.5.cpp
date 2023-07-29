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
float hamHienThiNgc(int n2){
	printf("\nMang vua nhap la:");
	for(int i=n2-1;i>=0;i--){
		printf("a[%d]=%f\n",i,a[i]);
	}
}
void  kTra(int n3){
	float x;
	printf("\nNhap vao so thuc x=");
	scanf("%f",&x);
	int count=0;
	int i;
	for(i=0;i<n3;i++){
		if((float)x/a[i] == 1){
			printf("\n Xuat hien x o vtri thu %d",i+1);
			count++;
		}
	}
	if(count>0){
		printf("\nX xuat hien %d lan trong mang",count);
	}else{
		printf("\nK co xh x trong mang");
	}
}
void hamXoa(int n4){
	int k;
	printf("\nNhap so nguyen k=");
	scanf("%d",&k);
	
	if(k>0 && k<=n4){
		for(int i =k;i<n4;i++){
			a[i-1] = a[i];
		}
		n4 = n4 -1;
	}
	printf("Mang vua xoa la:");
	for(int i=0;i<n4;i++){
	printf(" %f",a[i]);
  }
}


int main(){
	hamNhap_n();
	hamNhap_mang(n);
	hamHienThiNgc(n);
	kTra(n);
	hamXoa(n);
	
}
