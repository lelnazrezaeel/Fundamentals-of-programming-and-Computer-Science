#include<stdio.h>
int main()
{
    int n,a,b,c,d,i,j,k,l,m,o;
    scanf("%d",&n);
	a=2*n*n+2*n+1;
	c=n;
	d=(n+1)/2;
    for(i=0;i<a;i++)
    {
        printf("-");
    }
	printf("\n");
    for (o=0;o<n;o++)
    {
        c=n;
        for (i=1;i<=d;i++)
        {
            for (m=0;m<n;m++)
            {
		        printf("|");
                for (j=0;j<c;j++)
                {
                    printf(" ");
		        }
                for(k=0;k<(2*i-1);k++)
                {
                    printf("# ");
		        }
                for (l=0;l<n-(2*i-1);l++)
                {
                    printf(" ");
                }
            }
            c=c-2;
            printf("|\n");
        }
        c=3;
        for (i=1;i<=(d-1);i++)
        {
            for (m=0;m<n;m++)
            {
		        printf("|");
                for (j=0;j<c;j++)
                {
                    printf(" ");
		        }
                for (k=0;k<(n-2*i);k++)
                {
                    printf("# ");
                }
                for (l=0;l<2*i;l++)
                {
                    printf(" ");
                }
            }
            c=c+2;
            printf("|\n");
        }
        for(i=0;i<a;i++)
        {
            printf("-");
        }
        printf("\n");
    }
    return 0;
}