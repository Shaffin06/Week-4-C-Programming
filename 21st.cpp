#include <stdio.h>
int main()
{
	int i,j,s,n,x;
	scanf("%d %d",&n,&x);
	for(i=0;i<n;i++)
	{
		for(j=0;j<i+1;j++)
		printf("%d",i+x);
		printf("\n");
	}
	for(i=0;i<n;i++)
	{
		for(s=0;s<n-i;s++)
		printf("%d",x+n-1-i);
		printf("\n");
	}
	return 0;
	
}
