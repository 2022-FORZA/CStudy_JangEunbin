#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n, x = 1, cnt = 1;
    scanf("%d", &n);
    while (1) {
        if (n - x <= 0) {
            break;
        }
        n -= x;
        x = cnt * 6;
        cnt++;
    }
    printf("%d\n", cnt);
}