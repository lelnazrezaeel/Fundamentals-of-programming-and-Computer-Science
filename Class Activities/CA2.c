#include<stdio.h>
int main ()
{
    int x , min=9999 ;
    do{
        scanf("%d",&x);
        if (x<=min)
            min=x;
    }while(x!=9999);
    printf("%d",min);
    return 0;
}