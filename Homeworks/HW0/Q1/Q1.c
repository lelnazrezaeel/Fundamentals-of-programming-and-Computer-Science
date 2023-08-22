#include<stdio.h>

int main (void)
{
    int x=0;
    int y=0;
    scanf("%d",& x);
    while((x/10)!=0){
        y=0;    
        while (x>0){
            y=y+(x%10);
            x=x/10;  
        }
        x=y;
    }
    printf("%d",y);
    return 0;
}