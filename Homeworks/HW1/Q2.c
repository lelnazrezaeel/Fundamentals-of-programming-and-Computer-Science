#include<stdio.h>
int main ()
{
    int x=0;
    scanf("%d",&x);
    if (x<0)
        printf("Ice");
    if (x>=0 && x<=100)
        printf("Water");
    if (x>100)
        printf("Steam");
    return 0;
}