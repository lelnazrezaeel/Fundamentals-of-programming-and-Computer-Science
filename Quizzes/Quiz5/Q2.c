#include <stdio.h>
int main()
{
	int n , i , j ;
	scanf("%d",&n);
	int a[n] , b[n] , s[n+1];
	for ( i = 0; i < n; i++)
	{
		scanf("%d",a[i]);
	}
	for ( i = 0; i < n; i++)
	{
		scanf("%d",b[i]);
	}
	for ( i = 0; i < n+1; i++)
	{
		s[n]=0;
	}
	
	for ( i = 0; i < n; i++)
	{
		s[i]=s[i]+(a[i]+b[i])%10;
		s[i+1]=(a[i]+b[i])/10;
	}
	for ( i = 0; i < n+1; i++)
	{
		printf("%d",s[i]);
	}
	return (0);
}