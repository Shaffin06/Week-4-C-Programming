#include <stdio.h>
int main()
{
	int i,s,j,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(s=0;s<n-i;s++)
		printf("*");
		printf("\n");
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<i+1;j++)
		printf("*");
		printf("\n");
	}
	return 0;
}
