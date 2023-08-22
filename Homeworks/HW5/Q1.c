#include<stdio.h>
#include<string.h>
void LEX (char x[][20] , int y , int z);
void VOW (char x[][20] , int y , int z);
void DISTINCT (char x[][20] , int y , int z);
int main()
{
    int n , i , q , b , d=0 , j=0 , k;
	scanf("%d",&n);
	char a[n][20] , c[100][9];
	for ( i = 0; i < n; i++)
	{
		scanf("%s",a[i]);
	}
	scanf("%d",&q);
	int e[q];
	for (i = 0; i < q; i++)
	{
		scanf("%d",&b);
		e[i]=b;
		if (b!=1)
		{
			d++;
		    scanf("%s",c[j]);
			j++;
		}
	}
	int h=0 ;
	for (i = 0; i < q; i++)
	{
		if (e[i]==1)
		{
			for ( k = 0; k < n; k++)
			{
				printf("%s ",a[k]);
			}
			printf("\n");
		}
		if (e[i]==2)
		{
			if (strcmp(c[h],"LEX")==0)
			{
				LEX (a,n,20);
			}
			if (strcmp(c[h],"VOW")==0)
			{
				VOW (a,n,20);
			}
			if (strcmp(c[h],"DISTINCT")==0)
			{
				DISTINCT (a,n,20);
			}
			h++;
		}
	}
    return 0;
}
void LEX (char x[][20] , int y , int z)
{
	int i , j ;
	char c[20];
	for (i = 0; i < y; i++)
		{
		for (j = i+1; j < y; j++)
		{
			if(strcmp(x[i],x[j])>0)
			{
                strcpy(c,x[i]);
				strcpy(x[i],x[j]);
				strcpy(x[j],c);
			}
		}
	}
}
void VOW (char x[][20] , int y , int z)
{
	int i , j ;
	int a[y];
	char b[20];
	int c=0;
	for (i = 0; i < y; i++)
	{
		a[i]=0;
	}
	for (i = 0; i < y; i++)
	{
	    for ( j = 0; j<strlen(x[i]) ; j++)
		{
			if ( x[i][j]=='a' || x[i][j]=='e' || x[i][j]=='i' || x[i][j]=='u' || x[i][j]=='o')
			{
			    a[i]++;
            }	
		}
	}
	for ( i = 0; i < y-1; i++)
	{
		for ( j = 1; j <y; j++)
		{
			if (a[i]<a[j])
			{
				strcpy(b,x[j]);
				strcpy(x[j],x[i]);
			    strcpy(x[i],b);
			}		
		}
	}
	
}
void DISTINCT (char x[][20] , int y , int z)
{
	int i , j , k;
    char a[27]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	int b[26]={0};
	int c[y];
	char d[20];
	for (i = 0; i < y; i++)
	{
		c[i]=0;
	}
	for ( i = 0; i < y; i++)
	{
		for ( j = 0; j < strlen(x[i]); j++)
		{
			for (k=0;k<26;k++)
			{
			    if (x[i][j]==a[k])
			    {
				    if (b[k]==0)
					{
						b[k]=1;
						break;
					}
					
			    }
			}
			if (b[j]==1)
			{
				c[i]++;
			}
		}		
	}
    for ( i = 0; i < y-1; i++)
	{
		for ( j = 1; j <y; j++)
		{
			if (c[i]<c[j])
			{
				strcpy(d,x[j]);
				strcpy(x[j],x[i]);
			    strcpy(x[i],d);
			}		
		}
	}
}