#include<stdio.h>
int prime(int a);
void sum(int a);
int main ()
{
    int n;
    scanf("%d",&n);
    sum(n);
    return 0;
}
int prime(int a){
    int counter=0;
    for(int i=2;i<=a;i++){
        if(a%i==0){
            counter=1;
            break;
        }
        return counter;
    }
}
void sum(int a){
    if(prime(a)==0){
        printf("%d",a);
        return;
    }
    for(int i=2;i<=a;i++){
        if(prime(a)==0){
            if(prime(a-i)==0){
                printf("%d+%d",i,a-i);
                return;
            }
        }
    }
}