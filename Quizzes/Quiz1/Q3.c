#include<stdio.h>
int main ()
{
    int x,y,a,b,c,d,e,f,g;
    scanf("%d",&x);
    y=1000-x;
    a=y/25;
    b=y%25;
    c=b/10;
    d=b%10;
    e=d/5;
    f=d%5;
    g=f/1;
    printf("%d*(25),%d*(10),%d*(5),%d*(1)",a,c,e,g); 
    return 0;
}