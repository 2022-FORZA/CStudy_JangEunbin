#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int n,b,r=0,start=0,k=0,max=0;
	scanf("%d", &n);
	int arr[1000] = { 0 };
	for (int i = 0;i < n;i++) {
		scanf("%d", &arr[i]);
	}
	for (int i = 0;i < n;i++) {
		if (r == 0) {
			if (i <= (n - 2) && arr[i] < arr[i + 1]) {
				start = arr[i];
				r = 1;
			}
		}
		else {
			if (i == (n - 1) || arr[i] >= arr[i + 1]) {
				k = arr[i] - start;
				if (k > max)
					max = k;
				r = 0;
				continue;
			}
		}
	}
	printf("%d", max);
}