#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int t, n, arr[200] = { 0 };
	scanf("%d", &t);
	for(int i=0;i<t;i++){
		scanf("%d", &n);
		for (int j = 0;j < n;j++) {
			scanf("%d", &arr[j]);
		}
		while (arr[2] != 0) {
			if (n % 2 == 0) {
				for (int k = 0;k < n / 2;k++) {
					arr[k] += arr[n - k - 1];
					arr[n - k - 1] = 0;
				}
			}
			else if (n % 2 == 1) {
				for (int k = 0;k < (n + 1) / 2;k++)
					if (k == (n + 1) / 2) {
						arr[k] += arr[k];
					}
					else {
						arr[k] += arr[n - k - 1];
						arr[n - k] = 0;
					}

			}
			if (n % 2 == 0)
				n = n / 2;
			else n = (n + 1) / 2;
		}
		if (arr[0] > arr[1]) {
			printf("Case #%d: Alice\n", i+1);
		}
		else if (arr[0] <= arr[1]) {
			printf("Case #%d: Bob\n", i+1);
		}
	}
}