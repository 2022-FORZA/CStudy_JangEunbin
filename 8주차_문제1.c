#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main() {
	int c = 0;
	while (1) {
		int len, test = 0;
		char f[1001], ap[1001];
		int ff[26] = { 0 }, app[26] = { 0 };
		scanf("%s %s", f, ap);
		c++;
		len = strlen(f);
		for (int i = 0;i < len;i++) {
			ff[f[i] - 'a']++;

		}
		for (int i = 0;i < len;i++) {

			app[ap[i] - 'a']++;
		}
		if (f[3]=='\0' && ap[3]=='\0'&& f[0] == 'E' && f[1] == 'N' && f[2] == 'D' && ap[0] == 'E' && ap[1] == 'N' && ap[2] == 'D') {
			break;
		}
		else {
			for (int i = 0;i < 27;i++) {
				if (ff[i] != app[i]) {
					test = 1;
				}
			}
			if (test == 0) {
				printf("Case %d: same\n", c);
			}
			else printf("Case %d: different\n", c);
		}
	}
}