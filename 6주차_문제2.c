#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int n, m;
	scanf("%d %d", &n, &m);
	int N, M,nn=0,mm=0,r;
	for (int i = 0;i < n;i++) {
		scanf("%d", &N);
		nn += N;
	}
	for (int i = 0;i < m;i++) {
		scanf("%d", &M);
		mm += M;
	}
	r = nn - mm;
	printf("%d", r);

}