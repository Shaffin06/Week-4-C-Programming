#include <stdio.h>
int main()
{
	int i,j,n,k;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<i+1;j++)
		{
			for(k=n-i;k<=n;k++)
			printf("%d",k);
		}
		printf("\n");
	}
	return 0;
//Don't Know Yet
	
}
