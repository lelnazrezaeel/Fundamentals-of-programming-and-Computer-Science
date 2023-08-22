#include<stdio.h>
int main()
{
    int i , n ;
	scanf("%d",&n);
	int q = n - 1 ;
	int a[n],b[n],*c=a,*d=b;
	for ( i = 0; i < n; i++)
	{
		scanf("%d",c+i);
		*(d+q)=*(c+i);
		q--;
	}
	for ( i = 0; i <n; i++)
	{
		printf("%d ",*(d+i));
	}
	return 0 ;
}