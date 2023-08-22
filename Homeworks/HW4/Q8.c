#include <stdio.h>
int main()
{
    int i , j , count=0;
	char a[7][7];
	for (i = 0; i < 7; i++)
	{
		for (j = 0; j < 8; j++)
		{
			scanf("%c",&a[i][j]);
		}
	}
    for (i = 0; i < 2; i++)
	{
		for (j = 2; j < 5; j++)
		{
		    if (a[i][j]=='o')
		    {
			    if (a[i][j-1]=='o' && a[i][j-2]=='.')
			    {
				    count=count+1;
			    }
				if (a[i][j+1]=='o' && a[i][j+2]=='.')
			    {
				    count=count+1;
			    }
                if (a[i+1][j]=='o' && a[i+2][j]=='.')
			    {
				    count=count+1;
			    }
			}
		}
	}
	for (i = 5; i < 7; i++)
	{
		for (j = 2; j < 5; j++)
		{
		    if (a[i][j]=='o')
		    {
			    if (a[i][j-1]=='o' && a[i][j-2]=='.')
			    {
				    count=count+1;
			    }
				if (a[i][j+1]=='o' && a[i][j+2]=='.')
			    {
				    count=count+1;
			    }
                if (a[i-1][j]=='o' && a[i-2][j]=='.')
			    {
				    count=count+1;
			    }
			}
		}	
	}
	for (i = 2; i < 5; i++)
	{
		for (j = 0; j < 2; j++)
		{
		    if (a[i][j]=='o')
		    {
			    if (a[i+1][j]=='o' && a[i+2][j]=='.')
			    {
				    count=count+1;
			    }
				if (a[i][j+1]=='o' && a[i][j+2]=='.')
			    {
				    count=count+1;
			    }
                if (a[i-1][j]=='o' && a[i-2][j]=='.')
			    {
				    count=count+1;
			    }
			}
		}	
	}
	for (i = 2; i < 5; i++)
	{
		for (j = 5; j < 7; j++)
		{
		    if (a[i][j]=='o')
		    {
			    if (a[i+1][j]=='o' && a[i+2][j]=='.')
			    {
				    count=count+1;
			    }
				if (a[i][j-1]=='o' && a[i][j-2]=='.')
			    {
				    count=count+1;
			    }
                if (a[i-1][j]=='o' && a[i-2][j]=='.')
			    {
				    count=count+1;
			    }
			}
		}	
	}
	for (i = 2; i < 5; i++)
	{
		for (j = 2; j < 5; j++)
		{
		    if (a[i][j]=='o')
		    {
			    if (a[i+1][j]=='o' && a[i+2][j]=='.')
			    {
				    count=count+1;
			    }
				if (a[i][j-1]=='o' && a[i][j-2]=='.')
			    {
				    count=count+1;
			    }
                if (a[i-1][j]=='o' && a[i-2][j]=='.')
			    {
				    count=count+1;
			    }
				if (a[i][j+1]=='o' && a[i][j+2]=='.')
			    {
				    count=count+1;
			    }
			}
		}	
	}
	printf("%d",count);
	return (0);
}