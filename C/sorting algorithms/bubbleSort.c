#include <stdio.h>

void bubbleSort(int arr[], int arrLen);
int main() {
    int array[3] = {4, 6, 1};
	int arrLen = (int) sizeof(array) / sizeof(array[0]);
	bubbleSort(array, arrLen);
	printf("test 1");
    for (int i = 0; i < arrLen; i++) {
		printf("test 2");
		printf("%d\n", array[i]);
    }
	printf("test 3");
}

void bubbleSort(int arr[], int len) {
    printf("len: %d\n", len);
	int count = 0;
	while (1) {
		if (count == len - 1) {
			break;
		}
		int count = 0;
		for (int i = 0; i < len - 1; i++) {
			if (count == len - 1) {
				break;
			}
			if (arr[i + 1] < arr[i]) {
				int temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
				continue;
			}
			count++;
		}
	}
}
