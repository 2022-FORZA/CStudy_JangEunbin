#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	char num[16]={0};
	int count = 0;
	scanf("%s", num);
	for (int i = 0;num[i]!='\0';i++) {
		if (num[i] == 'A' || num[i] == 'B' || num[i] == 'C') {
			count += 3;
		}
		else if (num[i] == 'D' || num[i] == 'E' || num[i] == 'F') {
			count += 4;
		}
		else if (num[i] == 'G' || num[i] == 'H' || num[i] == 'I') {
			count += 5;
		}
		else if (num[i] == 'J' || num[i] == 'K' || num[i] == 'L') {
			count += 6;
		}
		else if (num[i] == 'M' || num[i] == 'N' || num[i] == 'O') {
			count += 7;
		}
		else if (num[i] == 'P' || num[i] == 'Q' || num[i] == 'R'||num[i]=='S') {
			count += 8;
		}
		else if (num[i] == 'T' || num[i] == 'U' || num[i] == 'V') {
			count += 9;
		}
		else if (num[i] == 'W' || num[i] == 'X' || num[i] == 'Y' || num[i]=='Z') {
			count += 10;
		}
	}
	printf("%d", count);
}