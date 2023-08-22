#include<stdio.h>
int main (){
    long long int n,a=0,b=1,c;
    scanf("%lld",&n);
    if (n==0)
        c=0;
    for (int i=1;i<=n;i++){
        c=a+b;
        a=b;
        b=c;
    }
    printf("%lld",c);
    return 0;
}