#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int n,star;
	scanf("%d", &n);
	star = n;
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < i;j++) {
			printf(" ");
		}
		for (int j = 0;j < star*2-1;j++) {
			printf("*");
		}
		star--;
		printf("\n");

	}
	star = 1;
	for (int i = n-1;i>0;i--) {
		for (int j = i-1;j > 0;j--) {
			printf(" ");
		}
		for (int j = 0;j < star*2 + 1;j++) {
			printf("*");
		}
		++star;
		printf("\n");

	}
}