#include<stdio.h>
int main()
{
    int t,i,x,y;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++){
        scanf("%d%d",&x,&y);
        if(x%2==0 && y%2==0){
            if(x-y==2 || x-y==0)
                a[i]=x+y;
            else
                a[i]=-1;
        }
        if(x%2==1 && y%2==1){
            if(x-y==2 || x-y==0)
                a[i]=x+y-1;
            else
                a[i]=-1;
        }
        if(x%2==1 && y%2==0){
            a[i]=-1;
        }
        if(x%2==0 && y%2==1){
            a[i]=-1;
        }
    }
    for(i=0;i<t;i++){
        printf("%d\n",a[i]);
    }
    return 0;
}