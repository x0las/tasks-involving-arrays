/* 5. Максимальный элемент. */

#include <stdio.h>

int main() {
	int arr[] = {8, 3, 1, 9, 4};
	int n = sizeof(arr) / sizeof(arr[0]);
	int min = arr[0];
	int min_index = 0;
	
	for (int i = 1; i < n; i++) {
		if (arr[i] < min) {
			min = arr[i];
			min_index = i;
		}
	}
	
	printf("Min = %d, index = %d\n", min, min_index);
	return 0;
}
