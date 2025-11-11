#include<stdio.h>

void leastAppeared(int number, int arr[], int *element, int *times) {
    int count, minCount = number + 1;

    for(int i = 0; i < number; i++) {
        int alreadyCounted = 0;
        for(int k = 0; k < i; k++) {
            if(arr[k] == arr[i]) {
                alreadyCounted = 1;
                break;
            }
        }
        if(alreadyCounted) continue;
        count = 1;
        for(int j = i + 1; j < number; j++) {
            if(arr[j] == arr[i]) {
                count++;
            }
        }
        if(count < minCount) {
            minCount = count;
            *element = arr[i];
        }
    }

    *times = minCount;
}

int main() {
    int arr[] = {1, 3, 3, 2, 4, 2, 5};
    int number = sizeof(arr)/sizeof(arr[0]);
    int element, times;

    leastAppeared(number, arr, &element, &times);

    printf("Phan tu it xuat hien nhat: %d\n", element);
    printf("So lan xuat hien: %d\n", times);

    return 0;
}

