#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int m, n;
	scanf("%d %d", &m, &n);
	if (m == n) {
		m = 2 * (m - 1);
	}
	else if (m > n) {
		m = 2 * (n - 1) + 1;
	}
	else if (m < n) {
		m = m = 2 * (m - 1);
	}
	printf("%d", m);
}