#include<stdio.h>
int main ()
{
    int a=0 , b=1 ,c=0 ,d=0;
    int n=0 ;
    scanf("%d",&n);
    if (n==0)
        printf("%d",a);
    else if (n==1)
        printf("%d",b);
    else{
        for(int i=2;i<=n;i++){
            c=a+b;
            d=c%10;
            a=b;
            b=d;
        }
        printf("%d",d);
    }
    return 0;
}