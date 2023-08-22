#include<stdio.h>
int main ()
{
    int n ,a=0,min=0;
    scanf("%d",&n);
    for (int i=1;i<n;i++){
        a=a+i;
        if (a>=n){
            min=a;
            break;
        } 
    }
    printf("%d",a);
    return 0;
}