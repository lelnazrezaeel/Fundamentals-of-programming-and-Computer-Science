#include <stdio.h>
int main()
{
	int n , i , j , k=0 , count=0;
	scanf("%d",&n);
    int a[n][n],r[n]={0},c[n]={0},d=0;
	for ( i = 0; i < n; i++)
	{
		for ( j = 0; j < n; j++)
		{
			scanf("%d",&a[i][j]);
		}
		
	}
	for ( i = 0; i < n; i++)
	{
		for ( j = 0; j < n; j++)
		{
			r[i]=r[i]+a[i][j];
		}
	}
	for ( j = 0; j < n; j++)
	{
		for ( i = 0; i < n; i++)
		{
			c[j]=c[j]+a[i][j];
		}
	}
	for ( i = 0; i < n; i++)
	{
		d=d+a[i][k];
		k++;
	}
	for ( i = 0; i < n; i++)
	{
		if (r[i]!=r[i+1])
		{
			count=1;
		}
		if (c[i]!=c[i+1])
		{
			count=1;
		}
        if (c[i]!=r[i])
		{
			count=1;
		}
		if (c[i]!=d)
		{
			count=1;
		}
	}
	if (count==0)
	{
		printf("%d",d);
		printf("Specia Matrix");
	}
	else
	{
		printf("Fail");
	}
	return (0);
}