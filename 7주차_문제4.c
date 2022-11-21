#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	double arr[10]={0}, total = 1, k,temp;
	for (int i = 9;i >= 0;i--) {
		scanf("%lf", &arr[i]);
	}
	for (int i = 0;i < 10;i++) {
		for (int j = 0;j < 10;j++) {
			if (arr[i] < arr[j]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for (int i = 1;i <=9;i++) {
		k = arr[i] / (i);
		total *= k * 10;
	}
	printf("%lf", total);
}