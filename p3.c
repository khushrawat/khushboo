#include<stdio.h>
int fspace(int x)
{
	printf(" ");
	}

/*	fstar(int )
	{
		printf("*");
		}*/
int main()
{int i,j,n,mid;
	scanf("%d",&n);
	mid=n/2;
	for(i=0;i<n;i++)
	{
		for(j=n-1;j>=0;j--)
		{
		fspace(j);}
		if(i!=mid)
		{
			printf("*");
			fspace(i);
			printf("*");
			}
				}
				printf("\n");
				return 0;
	}
