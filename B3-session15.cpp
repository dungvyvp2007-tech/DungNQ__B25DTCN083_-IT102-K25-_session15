#include<stdio.h>
int reversed(int number){
	int dao = 0 ;
	while(number!=0){
		dao = dao * 10 + number %10;
		number /=10;
	}
	return dao;
}

int main(){
	int number;
	printf("Nhap vao so nguyen : ");
	scanf("%d",&number);
	int dao = reversed(number);
	printf("So %d sau khi dao nguoc la : %d",number,dao);
	
}
