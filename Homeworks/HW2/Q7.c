#include<stdio.h>
int main ()
{
    int n,k,c,count=0,a=1;
    scanf("%d%d",&n,&k);
    if(n==1){
        count=1;
        printf("%d",count);
    }
    for (int i=1;i<=n;i++){
        c=a+k;
        a=c;
        count=count+1;
        if(c%n==1){
            printf("%d",count);
            break;
        }         
    }
    return 0;
}