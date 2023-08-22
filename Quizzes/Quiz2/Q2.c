#include<stdio.h>
int main ()
{
    int n=0 , x=0,b=1,a=1;
    double cosx=0 , sum=0;
    scanf("%d%d",&n,&x);
    if (x==0 || n==0)
        cosx=1;
    for(int i=1 ;i<=n ;i++){
        if(i%2==0){
            for(int j=1;j<=i;j++){
                b=b*n;
                a=a*j;
                sum=sum+((b/a)*(-1));
            }
        }      
    }
    cosx=sum+1;
    printf("%ld",cosx);
    return 0;
}