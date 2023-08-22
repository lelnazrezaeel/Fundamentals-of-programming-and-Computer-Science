#include<stdio.h>
int main()
{
    int n,m,i,j,count=0;
    char a;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++){
        for(j=0;j<m+1;j++){
            scanf("%c",&a);
            if(a=='*'){
                count=count+1;
            }
        }
    }
    printf("%d",count);
    return 0;
}