#include <stdio.h>
typedef struct calculate
{
	int a;
	int b;
}calculate;
calculate sum(calculate x,calculate y)
{
	calculate res;
	res.a=x.a+y.a;
	res.b=x.b+y.b;
	return res ;
}
calculate submission(calculate x,calculate y)
{
	calculate res;
	res.a=x.a-y.a;
	res.b=x.b-y.b;
	return res ;
}
calculate multiply(calculate x,calculate y)
{
	calculate res;
	res.a=x.a*y.a-x.b*y.b;
	res.b=x.a*y.b+x.b*y.a;
	return res ;
}
int main()
{
	int n , m , i , j;
    scanf("%d%d",&n,&m);
	int b[m+1],c[m+1];
	char d[m+1];
	calculate e[n+1];
    for ( i = 1; i <= n; i++)
	{
		scanf("%d%d",&e[i].a,&e[i].b);
	}
	for (i = 1; i <= m; i++)
	{
		scanf("%d %c %d",&b[i],&d[i],&c[i]);
	}
	calculate f;
	for (i = 1; i <= m; i++)
	{
		if (d[i]=='+')
		{
			f = sum(e[b[i]],e[c[i]]);
		}
		if (d[i]=='-')
		{
			f= submission(e[b[i]],e[c[i]]);
		}
		if (d[i]=='*')
		{
			f = multiply(e[b[i]],e[c[i]]);
		}
		printf("%d %d\n",f.a,f.b);
	}
	return (0);
}