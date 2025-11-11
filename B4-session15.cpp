#include <stdio.h>
int sumArray(int number, int arr[100]){
	int tong=0;
	for(int i = 0 ; i < number ; i++){
		tong += arr[i];
	}
	return tong;
}

int main(){
	int number;
	int arr[100];
	int i;
	
    do {
        printf("Nhap so phan tu trong mang (1-100): ");
        scanf("%d", &number);
        if (number <= 0 || number > 100) {
            printf("Gia tri khong hop le! Vui long nhap lai.\n");
        }
    } while (number <= 0 || number > 100);

	printf("Nhap phan tu :\n");
	for (i=0;i<number;i++){
		printf("arr[%d] :",i);
		scanf("%d",&arr[i]);
	}
	int tong = sumArray(number,arr);
	printf("Tong cac phan tu trong mang la : %d",tong);
	
}
