#include <stdio.h>

int removeDuplicates(int arr[], int n) {
    if(n == 0) return 0;
    int j = 0;
    for(int i = 1; i < n; i++) {
        if(arr[i] != arr[j]) {
            j++;
            arr[j] = arr[i];
        }
    }
    return j + 1; 
}
int main() {
    int arr[] = {1, 2, 2, 3, 3, 3, 4, 5, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int newSize = removeDuplicates(arr, n);

    printf("Mang sau khi loai bo phan tu trung lap: ");
    for(int i = 0; i < newSize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nKich thuoc moi: %d\n", newSize);
}

