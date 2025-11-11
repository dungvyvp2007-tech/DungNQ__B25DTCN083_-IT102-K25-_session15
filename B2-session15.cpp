#include <stdio.h>

int sum(int number ){
	int tong=0;
	while(number!=0){
		tong +=number %10;
		number /=10;
	}
	return tong;
}

int main(){
	int number;
	int tong ;
	printf("Nhap vao so nguyen :");
	scanf("%d",&number);
	tong = sum(number);
	printf("Tong cac chu so cua %d : %d",number,tong);
	
	
}
