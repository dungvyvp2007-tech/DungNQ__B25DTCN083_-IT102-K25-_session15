#include<stdio.h>

int binarySearch(int number , int arr[],int searchValue){
	int left =0;
	int right = number - 1;
	int mid;
	while(left<=right){
		mid = (left+right)/2;
		if(arr[mid]==searchValue){
			return mid;
		}else if(arr[mid]>searchValue){
			right = mid - 1;
		}else{
			left = mid +1 ;
		}
	}
	return -1;
}

int main(){
	int arr[]={1,2,3,4,5,6,7,8,9};
	int number=sizeof(arr)/sizeof(arr[0]);
	int searchValue;
	int i;
		
	printf("Nhap so can tim :");
	scanf("%d",&searchValue);

	int index = binarySearch(number,arr,searchValue);
	
    if(index != -1) {
        printf("So %d nam o chi so %d trong mang\n", searchValue, index);
    } else {
        printf("Khong tim thay so %d trong mang\n", searchValue);
    }
	
}
