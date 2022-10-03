#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int a, n, count = 0;
	scanf("%d", &n);
	for (int i = 0;i < n;i++) {
		scanf("%d", &a);
		int sum = 0;
		for (int j = 1;j <= a;j++) {
			if (a % j == 0) {
				sum++;
			}
		}
		if (sum == 2) {
			count++;
		}
	}
	printf("%d", count);
}