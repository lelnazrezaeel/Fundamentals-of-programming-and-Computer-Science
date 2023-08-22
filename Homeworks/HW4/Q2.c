#include<stdio.h>
int main()
{
    int repetition[101]={0},number,i,j,max=0,max2=0;
    for(i=0;i<50;i++){
        scanf("%d",&number);
        repetition[number]++;
    }
    for(j=1;j<101;j++){
        if(repetition[j]>max){
            max=repetition[j];
            max2=j;
        }
    }
    printf("%d",max2);
    return 0;
}