#include<stdio.h>
#include <math.h>
int main (){
    int n,a,b,count=0,c=0,d=0,e;
    scanf("%d%d",&a,&b);
    scanf("%d",&n);
    e=n;
    while(n>0){
        n=n/10;
        count=count+1;
    }
    for(int i=0;i<count;i++){
        c=c+(e%10)*pow(a,i);
        e=e/10;
    }
    for(int j=0;c!=0;j++){
        d=d+(c%b)*pow(10,j);
        c=c/b;
    }
    printf("%d",d);
    return 0;
}