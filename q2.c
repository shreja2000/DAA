#include<stdio.h>
//#include<string.h>

void logic1(int a[]);
void logic2(int a[]);
void logic3(int a[]);

int main()
{
	//int a[100]={};
	/*int a[10000],i=1,x=1;
	printf("Start entering the numbers : ");
	scanf("%d",&a[0]);
	while(x==1)
	{
		scanf("%d",&a[i]);
		while(((a[i-1]>a[i])&&(a[i]!=-1))||((a[i-1]==-1)&&(a[i]!=-1)))
		{
			printf("Invalid number!\nEnter new number : ");
			scanf("%d",&a[i]);
		}
		i++;
		printf("Enter 1 to continue : ");
		scanf("%d",&x);
	}*/
	logic1(a);
	logic2(a);
	logic3(a);
	return 1;
}

void logic1(int a[])
{
	
	printf("--1--\n");
}

void logic2(int a[])
{
	printf("--2--\n");
}

void logic3(int a[])
{
	printf("--3--\n");
}

