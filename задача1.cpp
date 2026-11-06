/* 1. Объявить массив из 5–7 целых чисел и вывести все его элементы на экран. */

#include <stdio.h>

int main() {
	int arr[] = {10, 20, 30, 40, 50};
	int n = sizeof(arr) / sizeof(arr[0]);
	
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}
