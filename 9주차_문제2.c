#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int c[101] = { 0 },n,a,b=0;
	scanf("%d", &n);
	for (int i = 0;i < n;i++) {
		scanf("%d", &a);
		c[a]++;
	}
	for (int i = 0;i < 101;i++) {
		if (c[i] != 0 && c[i]!=1) {
			b += (c[i]-1);
		}
	}
	printf("%d", b);
}