#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <string.h>

int main() {
	char arr[1000001];
	int word = 1, len;
	scanf("%[^\n]s", arr);
	len = strlen(arr);
	
	for (int i = 0; i < len-1;i++) {
		if (arr[i] == ' ') {
			word++;
		 }
	}
	if (arr[0] == ' ') {
		word--;
	}
	printf("%d", word);
}