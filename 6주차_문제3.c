#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	long long n, num,sum=0;
	scanf("%lld", &n);
	num = n;
		for (int i = 1;i < n;i++) {
			sum += i * (n + 1);
	}
	printf("%lld", sum);
}