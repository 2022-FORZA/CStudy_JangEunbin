#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int c;
	scanf("%d", &c);
	for (int i = 0;i < c;i++) {
		int n, r, sum = 0;
		float k = 0, count = 0;
		scanf("%d", &n);

		int score[1000]={0};
		for (int j = 0;j < n;j++) {
			scanf("%d", &score[j]);
			sum += score[j];
		}
		r = sum / n;
		for (int j = 0;j < n;j++) {
			if (r < score[j]) {
				count++;
			}
			k = (count / n);
		}
		printf("%2.3f%%\n", k*100);
	}
	return 0;
}