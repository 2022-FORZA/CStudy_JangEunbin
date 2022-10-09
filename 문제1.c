#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	for (int i = 1;i < n;i++) {
		for (int j = 0;j < n - i;j++) {
			printf(" ");
		}
		printf("*");
		for (int k = 0;k < 2 * (i-1) - 1;k++) {
			printf(" ");
		}
		if (i != 1) {
			printf("*");
		}
		printf("\n");
	}
	for (int i = 0;i < 2*n-1;i++) {
		printf("*");
	}
}