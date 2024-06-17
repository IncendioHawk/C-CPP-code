#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bogoSort(int arr[], int arrLen);
void printArray(int arr[], int arrLen);

int main() {
    int array[10] = {88, 23, 16, 25, 30, 8, 36, 35, 13, 10};
    int arrLen = (int) sizeof(array) / sizeof(array[0]);
    bogoSort(array, arrLen);
    // printArray(array, arrLen);
}

void bogoSort(int arr[], int arrLen) {
    srand(time(NULL));
    while (1) {
        int sorted = 1;
        for (int i = 0; i < arrLen - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                sorted = 0;
                break;
            }
        }
        if (sorted) {
            break;
        }
        int seed = rand();
        for (int i = 0; i < arrLen; i++) {
            srand(seed);
            seed = rand();
            int j = rand() % arrLen;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
        printArray(arr, arrLen);
    }
}

void printArray(int arr[], int arrLen) {
    for (int i = 0; i < arrLen; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}