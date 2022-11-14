#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int w[10], k[10], temp,a,b;
	for (int i = 0; i < 20; i++) {
		if (i < 10)
			scanf("%d", &w[i]);
		else if (i > 9)
			scanf("%d", &k[i - 10]);
	}

	for (int i = 0; i < 20; i++) {
		if (i < 10) {
			for (int j = 0; j < 10; j++) {
				for (int r = 0; r < 10; r++){
				if (w[j] > w[r]) {
					temp = w[j];
					w[j] = w[r];
					w[r] = temp;
				}
				}
			}
		}
		else if (i > 9) {
			for (int j = 0; j < 10; j++) {
				for (int r = 0; r < 10; r++) {
				    if (k[j] > k[r]) {
						temp = k[j];
						k[j] = k[r];
						k[r] = temp;
					}
				}
			}
		}
	}
	a = w[0] + w[1] + w[2];
	b = k[0] + k[1] + k[2];
	printf("%d %d",a, b);
}