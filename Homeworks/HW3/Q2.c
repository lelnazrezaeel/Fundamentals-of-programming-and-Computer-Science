#include<stdio.h>
void star_one_line(int i);
void star(int i, int n);
int main ()
{
    int i,n,j;
    scanf("%d%d",&i,&n);
    star(i,n);
    return 0;
}
void star_one_line(int i)
{
    if(i==0){
        return;
    }
    else
    {
        printf("*");
        star_one_line(i-1);
    }    
}
void star(int i, int n)
{
    if(i<=n)
    {
        star_one_line(i);
        printf("\n");
        i++;
        star(i,n);
    }
    else
    {
        return;
    }
}