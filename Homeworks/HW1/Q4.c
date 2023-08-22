#include<stdio.h>
int main ()
{
    int x=0;
    int y=0;
    int z=0;
    int d=0;
    scanf("%d%d",&y,&x);
    d=(10-y)+1;
    if (x<=10){
        z=x;
        printf("Right %d %d",d,z);
    }
    if (x>10){
        z=(20-x)+1;
        printf("Left %d %d",d,z);
    }
    return 0;
}