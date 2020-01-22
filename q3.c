#include<stdio.h>

void pattern1(int n);
void pattern2(int n);
void pattern3(int n);
void pattern4(int n);
void pattern5(int n);

int main()
{
	int n;
	printf("Enter n value : ");
	scanf("%d",&n);
	printf("\n");
	pattern1(n);
	printf("\n\n");
	pattern2(n);
	printf("\n\n");
	pattern3(n);
	printf("\n\n");
	pattern4(n);
	printf("\n\n");
	pattern5(n);
	printf("\n\n");
	printf("\nthanks\n");
	return 1;
}

void pattern1(int n)
{
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n-i+1;j++)
			printf("%d ",j);
		printf("\n");
	}
	printf("\n");
}

void pattern2(int n)
{
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<i;j++)
			printf("  ");
		for(int j=i;j<=n;j++)
			printf("%d ",j);
		printf("\n");
	}
	printf("\n");
}

void pattern3(int n)
{
	for(int i=n;i>0;i--)
	{
		for(int j=1;j<=n-i+1;j++)
			printf("%d ",j);
		printf("\n");
	}
	printf("\n");
}

void pattern4(int n)
{
	for(int i=n;i>0;i--)
	{
		for(int j=1;j<i;j++)
			printf("  ");
		for(int j=i;j<=n;j++)
			printf("%d ",j);
		printf("\n");
	}
	printf("\n");
}

void pattern5(int n)
{
	for(int i=1;i<n;i++)
	{
		for(int j=1;j<i;j++)
			printf("  ");
		for(int j=i;j<2*n-i;j++)
			printf("%d ",j);
		printf("\n");
	}
	for(int i=n-1;i>0;i--)
	{
		for(int j=1;j<i;j++)
			printf("  ");
		for(int j=i;j<2*n-i;j++)
			printf("%d ",j);
		printf("\n");
	}
}
