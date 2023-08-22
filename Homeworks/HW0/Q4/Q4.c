#include<stdio.h>

int main (void)
{
    int n, m;
    scanf("%d %d", &n, &m);
    char field[n][m];
    for (int i = 0; i < n; i++) 
    {
        scanf("%s", field[i]);
    }
    int count = 0;
    for (int i = 0; i < n - 2; i++) {
        for (int j = 0; j < m - 2; j++) {
            if (field[i][j] == '*' && field[i][j + 1] == '*' && field[i][j + 2] == '*' &&
                field[i + 1][j] == '*' && field[i + 1][j + 2] == '*' && field[i + 2][j + 2] == '*') 
                {
                count++;
            }
            else if (field[i][j + 1] == '*' && field[i][j + 2] == '*' && field[i + 1][j + 2] == '*' &&
                field[i + 2][j] == '*' && field[i + 2][j + 1] == '*' && field[i + 2][j + 2] == '*')
            {
                count++;
            }
            else if (field[i][j] == '*' && field[i + 1][j] == '*' && field[i + 1][j + 2] == '*' &&
                field[i + 2][j] == '*' && field[i + 2][j + 1] == '*' && field[i + 2][j + 2] == '*')
            {
                count++;
            }
            else if (field[i][j] == '*' && field[i][j + 1] == '*' && field[i][j + 2] == '*' &&
                field[i + 1][j] == '*' && field[i + 2][j] == '*' && field[i + 2][j + 1] == '*')
            {
                count++;
            }
            else if (field[i][j] == '*' && field[i][j + 1] == '*' && field[i][j + 2] == '*' &&
                field[i + 1][j] == '*' && field[i + 1][j + 2] == '*' && field[i + 2][j] == '*')
            {
                count++;
            }
            else if (field[i][j] == '*' && field[i][j + 1] == '*' && field[i][j + 2] == '*' && 
                field[i + 1][j + 2] == '*' && field[i + 2][j + 1] == '*' && field[i + 2][j + 2] == '*')
            {
                count++;
            }
            else if (field[i][j + 2] == '*' && field[i + 1][j] == '*' && field[i + 1][j + 2] == '*' &&
                field[i + 2][j] == '*' && field[i + 2][j + 1] == '*' && field[i + 2][j + 2] == '*')
            {
                count++;
            }
            else if (field[i][j] == '*' && field[i][j + 1] == '*' && field[i + 1][j] == '*' &&
                field[i + 2][j] == '*' && field[i + 2][j + 1] == '*' && field[i + 2][j + 2] == '*')
            {
                count++;
            }
        }
    }
    printf("%d\n", count);
    return 0;
}