#include<stdio.h>
int main()
{

    int n,i,j;
    scanf("%d",&n);
    int profit[n],id[n],max=0,mid=0;
    for(i=0;i<n;i++){
        scanf("%d",&profit[i]);
    }
    for(i=0;i<n;i++){
        scanf("%d",&id[i]);
    }
    for(j=0;j<n;j++){
        for(i=0;i<n-1;i++){
            if(profit[i]<profit[i+1]){
                max=profit[i];
                profit[i]=profit[i+1];
                profit[i+1]=max;
;               mid=id[i];
                id[i]=id[i+1];
                id[i+1]=mid;
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%d ",id[i]);
    }
    return 0;
}