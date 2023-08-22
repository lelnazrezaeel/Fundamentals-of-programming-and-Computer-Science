#include<stdio.h>
int main ()
{
    int a , b , kmm=0 , bmm=0;
    scanf("%d%d",&a,&b);
    for (int i=1 ; i<=a ; i++){
        if(a%i==0){
            if(b%i==0){
                bmm=i;
            }
        }
    }
    kmm=(a*b)/bmm;
    if(a==0)
        kmm=b;
    if(b==0)
        kmm=a;
    printf("%d %d",bmm,kmm);
    return 0;
}