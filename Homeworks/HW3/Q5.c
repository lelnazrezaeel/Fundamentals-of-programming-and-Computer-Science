#include<stdio.h>
int reverse(int a);
int prime(int a);
int main ()
{
    int i=1,n,b,c=0;
    scanf("%d",&n);
    while(i!=0){
        if(prime(i)==0){
            if(i==reverse(i)){
                c+=1;
            }
        }
        if(c==n){
            b=i;
            break;
        }
        i++;
    }
    printf("%d",b);
    return 0;
}
int reverse(int a){
    int rev=0;
    while(a>0){
        rev=rev*10+a%10;
        a=a/10;
    }
    return rev;
}
int prime(int a){
    int i,count=0;
    if(a==1)
        count=1;
    for(i=2;i<a;i++){
        if(a%i==0){
            count=1;
        } 
    }
    return count;
}