#include<stdio.h>
int f(int n);
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",f(n));
    return 0;
}
int f(int n){
    if(n==1 || n==2){
        return 1;
    }
    else{
        return (4*n-7)%n;
    }
}