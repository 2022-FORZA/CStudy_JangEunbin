#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	int n, m, arr[100], max=0,sum;
	scanf("%d %d", &n, &m);
	for (int i = 0;i < n;i++) {
		scanf("%d", &arr[i]);
	}
	for (int i = 0;i < n - 2;i++) {
		for (int j = i + 1;j < n - 1;j++) {
			for (int k = j + 1;k < n;k++) {
				sum = arr[i] + arr[j]+arr[k];
				if (max < sum && sum <= m)
					max = sum;
			}
		}
	}
	printf("%d", max);
}