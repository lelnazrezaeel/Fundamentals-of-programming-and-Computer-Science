#include<stdio.h>
void f(int a[],int lena);
int main()
{
    int lena,i,j;
    scanf("%d",&lena);
    int a[lena];  
    for(i=0;i<lena;i++){
        scanf("%d",&a[i]);
    }
    f(a,lena);
    return 0;
}
void f(int a[],int lena){
    int i,j,k,b[lena],t=0,count=0;
    for(i=0;i<lena;i++){
        for(j=0;j<lena;j++){
            for(k=0;k<lena;k++){
                if(a[i]+a[j]==a[k]){
                    b[t]=a[i];
                    t++;
                    b[t]=a[j];
                    t++;
                    count=count+1;
                }
            }
        }
    }
    if(count==0)
        printf("NOT EXIST");
    else{
        for(i=0;i<lena;i=i+2){
            printf("%d %d\n",b[i],b[i+1]);
            return;
        }
    }
}