#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main() {
	char arr[100];
	int n,w=0,len,b=0;
	scanf("%d", &n);
	for (int i = 0;i < n;i++) {
		int ap[26] = { 0 };
		scanf("%s", arr);
		len = strlen(arr);
		for (int j = 0;j < len;j++) {
			if (j != 0 && arr[j] != arr[j - 1] && ap[arr[j] - 'a'] == 1) {
				b = 1;
				break;
			}
			else ap[arr[j] - 'a'] = 1;
		}
		if (b != 1) {
			w++;
		}
		else {
			b = 0;
		}
	}
	printf("%d", w);
}