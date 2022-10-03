#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
		int x, y, z;
		while (x!=-1) {
		scanf("%d %d %d", &x, &y, &z);
		if (x == 0 && y == 0 && z == 0) {
			break;
		}
		if (x > y && x > z) {
			if (z * z + y * y == x * x) {
				printf("right");
				printf("\n");
			}
			else {
				printf("wrong");
				printf("\n");
			}
		}
		if (y>x && y > z) {
			if (z * z + x * x == y * y) {
				printf("right");
				printf("\n");
			}
			else {
				printf("wrong");
				printf("\n");
			}
		}
		if (z > y && z>x) {
			if (x * x + y * y == z * z) {
				printf("right");
				printf("\n");
			}
			else {
				printf("wrong");
				printf("\n");
			}
		}
	}
}