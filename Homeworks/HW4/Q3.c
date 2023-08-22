#include<stdio.h>
int main()
{

    int a,b,c,i,j,k;
    scanf("%d%d%d",&a,&b,&c);
    int mat1[a][b];
    int mat2[b][c];
    int result[a][c];
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            scanf("%d",&mat1[i][j]);
        }
    }
    for(i=0;i<b;i++){
        for(j=0;j<c;j++){
            scanf("%d",&mat2[i][j]);
        }
    }
    for(i=0;i<a;i++){
        for(j=0;j<c;j++){
            result[i][j]=0;
            for(k=0;k<b;k++){
                result[i][j]=result[i][j]+mat1[i][k]*mat2[k][j];
            }
        }
    }
    for(i=0;i<a;i++){
        for(j=0;j<c;j++){
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }   
    return 0;
}