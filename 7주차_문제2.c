#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int t, k, n;
	int ap[15][15]={0};
	scanf("%d", &t);
	for (int i = 0;i < 15;i++) {
		ap[0][i] = i;
	}
	for (int j = 0;j < 15;j++) {
		ap[j][1] = 1;
	}
	for (int i = 0;i < t;i++) {
		scanf("%d\n%d", &k, &n);
		for (int f = 1;f <= k;f++) {
			for (int s = 1;s <= n;s++) {
				ap[f][s] = ap[f - 1][s] + ap[f][s - 1];
			}
		}
		printf("%d", ap[k][n]);
		printf("\n");
	}

}