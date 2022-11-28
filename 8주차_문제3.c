#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int arr[1001] = { 0 };
	int n;
	int i, j, tmp;
	int count = 0;

	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	for (i = 0; i < n; i++) {
		for (j = i; j < n; j++) {
			if (arr[i] >= arr[j]) {
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}

		j = n;
	}

	for (i = 0; i < n; i++) {
		if (j == 0)break;

		if (arr[i] >= j)
			if (j == (n - i))break;
			else {
				j--;
				i = 0;
			}
		else {
			if (i == (n - 1)) {
				j--;
				i = 0;
			}
		}

	}
	printf("%d", j);
}
