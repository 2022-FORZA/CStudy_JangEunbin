#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int arr[9] = { 0 };
	int total = 0, over = 0, f, s, temp;
	for (int i = 0;i < 9;i++) {
		scanf("%d", &arr[i]);
		total += arr[i];
	}
	over = total - 100;
	for (int i = 0;i < 9;i++) {
		for (int j = 0;j < 9;j++) {
			if (arr[i] + arr[j] == over) {
				f = arr[i];
				s = arr[j];
				break;
			}
		}
	}
	for (int i = 0;i < 9;i++) {
		for (int j = 0;j < 9;j++) {
			if (arr[i] < arr[j]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for (int i = 0;i < 9;i++) {
		if (arr[i] != f && arr[i] != s) {
			printf("%d\n", arr[i]);
		}
	}
}