#include <stdio.h>
int main() 
{ 
    int n,sum=0;
    scanf("%d",&n);
    for(int i=1;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=j;k<n;k++){
                if(i+j+k==n){
                    if(k*k==j*j+i*i){
                        printf("%d %d %d",i,j,k);
                        sum=sum+1;
                        break;
                    }
                }    
            }
        }
        
    }
    if (sum==0)
        printf("Impossible");
    return 0;
}