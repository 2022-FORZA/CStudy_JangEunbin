#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int x, y, p = 0, max = 0;
	for (int i = 0;i < 4;i++) {
		scanf("%d %d", &x, &y);
		p -= x;
		p += y;
		if (max < p)
			max = p;
	}
	printf("%d", max);
}