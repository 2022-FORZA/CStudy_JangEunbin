#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int Color() {
    char color[10];

    scanf("%s", color);
    if (strcmp(color, "black") == 0)
        return 0;
    else if (strcmp(color, "brown") == 0)
        return 1;
    else if (strcmp(color, "red") == 0)
        return 2;
    else if (strcmp(color, "orange") == 0)
        return 3;
    else if (strcmp(color, "yellow") == 0)
        return 4;
    else if (strcmp(color, "green") == 0)
        return 5;
    else if (strcmp(color, "blue") == 0)
        return 6;
    else if (strcmp(color, "violet") == 0)
        return 7;
    else if (strcmp(color, "grey") == 0)
        return 8;
    else if (strcmp(color, "white") == 0)
        return 9;
    else
        return Color();
}
int main(void) {
    int color;
    long long n = 0;
    for (int i = 0;i < 3;i++) {
        color = Color();
        if (i == 0) {
            n += color * 10;
        }
        else if (i == 1) {
            n += color;
        }
        else if (i == 2 && color != 0) {
            for (int j = 0;j < color;j++) {
               n *= 10;
            }
        }
    }
    printf("%lld", n);
}