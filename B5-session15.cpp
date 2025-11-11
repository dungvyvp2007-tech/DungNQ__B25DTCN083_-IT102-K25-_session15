#include<stdio.h>

void mostAppeared(int number , int arr[],int *element,int *times){
	int count,max = 0;
	for(int i = 0;i < number ; i++){
		count=0;
		for(int j = 0 ; j<number ;j++){
			if(arr[i]==arr[j]){
				count++;
			}
		}
		if(count>max){
			max = count;
			*element = arr[i];			
		}
	}
	*times = max;
}

int main(){
	int arr[]={1,2,2,2,3,4,4,5,3};
	int number = sizeof(arr)/sizeof(arr[0]);
	int element,times;
	mostAppeared(number,arr,&element,&times);
	printf("Phan tu xuat hien nhieu nhat trong mang la :%d\n",element);
	printf("So lan xuat hien trong mang la :%d",times);
}
