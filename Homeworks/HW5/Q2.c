#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char un[15][25];
    int cm=0,cl=0,ca=0,cd=0,i,j;
    for(i=0;i<15;i++)
    {
        scanf("%s",un[i]);
        if(strlen(un[i])==6){
            cl++;
        }
        if(un[i][0]=='a' || un[i][0]=='A'){
            ca++;
        }
        if (strcmp(un[i],"mohammad" ) == 0 ) 
        {
            cm++;
        }
        for(j=0;j<strlen(un[i]);j++)
        {
            if(isdigit(un[i][j])){
                cd++;
				break;
            }
        }
    }
    printf("%d\n%d\n%d\n%d",cm,cl,ca,cd);
    return 0;
}