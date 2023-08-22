#include<stdio.h>
int main ()
{
    char x;
    char y;
    scanf("%*d%c%*d%c",&x,&y);
    printf("%c %c",x,y);
    return 0;
}