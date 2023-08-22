#include<stdio.h>
int main()
{
    int group,count=0,c1=0,c3=0,taxi1_3=0,taxi,i,j;
    scanf("%d",&group);
    int number[group];
    for(i=0;i<group;i++){
        scanf("%d",&number[i]);
    }
    for(i=0;i<group;i++){
        if(number[i]==2 || number[i]==4){
            count=count+number[i];
        }
        if(number[i]==1){
            c1=c1+1;
        }
        if(number[i]==3){
            c3=c3+1;
        }
    }
    if(c1<=c3){
        taxi1_3=c3;
    }
    if(c1>c3){
        taxi1_3=c3;
        count=count+(c1-c3);
    }
    taxi=count/4;
    if(count%4==0){
        printf("%d",taxi+taxi1_3);
    }
    else{
        printf("%d",taxi+taxi1_3+1);
    }
    return 0;
}