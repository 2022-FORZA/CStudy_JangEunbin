#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int arr[10] = { 0 }, a, total = 1;
	for (int i = 0;i < 3;i++) {
		scanf("%d", &a);
		total *= a;
	}
	for (int i = total;i >0;i/=10) {
			arr[i%10]++;
	}
	for (int i = 0;i < 10;i++) {
		printf("%d\n", arr[i]);
	}
}