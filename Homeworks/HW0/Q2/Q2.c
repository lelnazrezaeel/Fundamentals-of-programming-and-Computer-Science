#include<stdio.h>

int main (void)
{
    int inputs[100000];
    int temp, k=0;
    while (1)
    {
        scanf("%d", &temp);
        if (temp != 0)
        {
            inputs[k] = temp;
            k += 1;
        }
        else
        {
            break;
        }
    }
    for (int i = k-1; i >= 0; i--)
    {
        printf("%d\n", inputs[i]);
    }
}