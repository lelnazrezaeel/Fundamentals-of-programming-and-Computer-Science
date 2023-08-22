#include<stdio.h>

int main (void)
{
    int n, m;
    scanf("%d %d", &n, &m);
    for (int i = 0; i < 3 * n; i++) {
        for (int j = 0; j < 3 * m; j++) {
            if ((i / n) % 2 == 0) {
                if ((j / m) % 2 == 0) {
                    printf("X");
                } else {
                    printf(".");
                }
            } else {
                if ((j / m) % 2 == 0) {
                    printf(".");
                } else {
                    printf("X");
                }
            }
        }
        printf("\n");
    }
    return 0;
}