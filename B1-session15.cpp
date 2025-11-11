#include<stdio.h>
int different(int a , int b ){
	int hieu;
	if(a>b){
		hieu = a - b;
	}else if(a<b){
		hieu = b - a ;
	}else{
		hieu = 0;
	}
	return hieu;
}
int product(int a , int b){
	int tich;
	tich = a * b;
	return tich;
}

int main(){
	int a,b;
	int hieu;
	int tich;
	
	printf("Nhap vao so nguyen a :");
	scanf("%d",&a);
	printf("Nhap vao so nguyen b :");
	scanf("%d",&b);
	hieu = different(a,b);
	printf("Different : %d\n",hieu);
	tich = product(a,b);
	printf("Product : %d",tich);
	
	
}
