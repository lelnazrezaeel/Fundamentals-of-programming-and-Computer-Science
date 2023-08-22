#include <stdio.h>
#include <string.h>
int main()
{
	int n , i , j , k , l;
	char a[20];
    scanf("%d %s",&n,&a);
	char b[n][20];
	int c[n];
	for(i = 0; i < strlen(a); i++)
  	{
  		for(j = i + 1; a[j] != '\0'; j++)
  		{
  			if(a[j] == a[i])  
			{
  				for(k = j; a[k] != '\0'; k++)
				{
					a[k] = a[k + 1];
				}
 			}
		}
	}
	for (l = 0; l < n ; l++)
	{
		scanf("%s",b[l]);
		for(i = 0; i < strlen(b[l]); i++)
  	    {
  		    for(j = i + 1; b[l][j] != '\0'; j++)
  		    {
  			    if(b[l][j] == b[l][i])  
			    {
  				    for(k = j; b[l][k] != '\0'; k++)
				    {
					    b[l][k] = b[l][k + 1];
					}
				}
 			}
		}
		
	}
	for (i = 0; i < n; i++)
	{
		c[i]=0;
		for ( j = 0; b[i][j]!='\0'; j++)
		{
			for ( k = 0; k < 20; k++)
			{
				if (b[i][j]==a[k])
				{
					c[i]++;	
				}
			}
		}
	}
	for (i = 0; i <n; i++)
	{
		if (c[i]==strlen(b[i]))
	    {
			if (strlen(b[i])==strlen(a))
			{
				printf("Yes\n");
			}
			else
			{
				printf("No\n");
			}
		}
		else
		{
			printf("No\n");
		}
	}
	return (0);
}