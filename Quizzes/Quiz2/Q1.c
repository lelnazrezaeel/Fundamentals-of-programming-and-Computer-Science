#include<stdio.h>
int main ()
{
    int n=0 , counter=0,a=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        counter=0;
        for(int j=1;j<=i;j++){
            if(i%j==0)
                counter=counter+1;
        }
        if (counter!=2)
            a=a*i;
    }
    printf("%d",a);
    return 0;
}