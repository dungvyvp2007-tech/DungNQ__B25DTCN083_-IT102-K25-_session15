#include<stdio.h>
void bubbleSort(int number,int arr[]){
	for(int i = 0 ; i < number-1 ; i++){
		for (int j = 0; j < number-i-1;j++){
			if(arr[j]>arr[j+1]){
				int temp = arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}


int main(){
	int arr[]={1,4,3,7,5,6,9,10,2};
	int number = sizeof(arr)/sizeof(arr[0]);
	
	bubbleSort(number,arr);
	printf("Mang sau khi sap xep :");
	for(int i = 0 ; i < number ; i++){
		printf("%d ",arr[i]);
	}
}
