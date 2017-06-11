#include<stdio.h>
int main()
{
	int i,sp,k,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		if(i==n-1||i==0)
		{	for(k=0;k<n;k++)
				printf("*");}
else
{
	for(sp=0;sp<(n-1)-i;sp++)
		printf(" ");
		printf("*");
	}
	printf("\n");
}
return 0;
	}

