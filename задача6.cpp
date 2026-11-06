/* 6. Количество чётных элементов. */

#include <stdio.h>

int main() {
	int arr[] = {1, 2, 3, 4, 5, 6, 7};
	int n = sizeof(arr) / sizeof(arr[0]);
	int count_even = 0;
	
	for (int i = 0; i < n; i++) {
		if (arr[i] % 2 == 0) {
			count_even++;
		}
	}
	
	printf("Even count = %d\n", count_even);
	return 0;
}
