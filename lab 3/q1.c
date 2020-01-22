#include<stdio.h>

struct heap
{
	int a[129];
	int last;
};

struct heap H;
int b[744769],p,n;

void insert(int p);
int deletemax();
void print();
void descending_order();
void logic1();
void logic2();
void logic3();

int main()
{
	printf("Enter number of array elements : ");
	scanf("%d",&n);
	printf("Enter elements of array one by one:\n");
	for(int i=0;i<n;i++)
		scanf("%d",&b[i]);
	for(int i=0;i<n;i++)
		printf("%d ",b[i]);
	printf("\n");
	printf("Enter the number p: ");
	scanf("%d",&p);
	logic1();
	logic2();
	logic3();
	return 1;
}

void logic1()
{
	for(int i=0;i<n-1;i++)
		for(int j=i+1;j<n;j++)
		{
			if(p==b[i]+b[j])
			{
			printf("yes\n");
			return;
			}
		}
	printf("no\n");
}

void logic2()
{
	printf("---");
}

void logic3()
{
	for(int i=0;i<n;i++)
		insert(b[i]);
	descending_order();
	int q=0,r=n-1;
	while(q!=r)
	{
		if(b[q]+b[r]==p)
		{
			printf("yes\n");
			return;
		}
		else if(b[q]+b[r]<p) r-=1;
		else q+=1;
	}
	printf("no\n");
}

void insert(int p)
{
	H.last++;
	H.a[H.last]=p;
	int t=H.last;
	while(t/2>=1 && H.a[t]>H.a[t/2])
	{
		H.a[t]=H.a[t]^H.a[t/2];
		H.a[t/2]=H.a[t]^H.a[t/2];
		H.a[t]=H.a[t]^H.a[t/2];
		t/=2;
	}
}

int deletemax()
{
	int x=H.a[1];
	H.a[1]=H.a[H.last--];
	int t=1;
	int mi;
	while(2*t<=H.last)
	{
		if(2*t+1<=H.last) mi=H.a[2*t]>H.a[2*t+1]?2*t:2*t+1;
		else mi=2*t;
		if(H.a[mi]>H.a[t])
		{
			H.a[t]=H.a[t]^H.a[mi];
			H.a[mi]=H.a[t]^H.a[mi];
			H.a[t]=H.a[t]^H.a[mi];
			t=mi;
		}
		else break;
	}
	return x;
}

void descending_order()
{
	int x=H.last;
	for(int i=1;i<=x;i++) b[i-1]=deletemax();
	printf("\n");
}
