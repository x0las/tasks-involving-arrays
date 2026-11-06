/* 3. Среднее арифметическое. */

#include <stdio.h>

int main() {
	int arr[] = {1, 2, 3, 4, 5, 6};
	int n = sizeof(arr) / sizeof(arr[0]);
	long long sum = 0;
	
	for (int i = 0; i < n; i++) {
		sum += arr[i];
	}
	
	double avg = (double)sum / n;
	printf("Average = %.2f\n", avg);
	return 0;
}
