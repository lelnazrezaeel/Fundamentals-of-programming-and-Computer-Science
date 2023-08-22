#include<stdio.h>
int main ()
{
    long long int n , b=0 , c , a ;
    scanf("%lld",&n);
    c=n;
    while (n!=0){
        a=n%10;
        b=a+b*10;
        n=n/10;
    }
    if (c==b)
        printf("YES");
    else
        printf("NO");
    return 0;
}