#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int total = 0,i=0;
	char arr[100];
	scanf("%s", &arr);
	while(arr[i]) {
		if (arr[i] == '=' || arr[i] == '-') {
			++i;
		}
		else if (arr[i] == 'd' && arr[i + 1] == 'z' && arr[i + 2] == '=') {
			++total;
			i = i + 3;
		}
		else if ((arr[i] == 'l' || arr[i] == 'n') && arr[i + 1] == 'j') {
			++total;
			i = i + 2;
		}
		else {
			++total;
			++i ;
		}
	}
	printf("%d", total);
}