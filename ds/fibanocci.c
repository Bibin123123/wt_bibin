#include <stdio.h>
void fib(int n,int prev1,int prev2)
{
	if(n<3)
	{
		return;
	}
	else
	{
		int curr=prev1+prev2;
		printf("%d ",curr);
		return fib(n-1,curr,prev1);
	}

}
void print(int n)
{
	if(n<0)
	{
		printf("Error");

	}
	else if(n==1)
	{
		printf("0 ");
	}
	else if(n==2)
	{
		printf("0 1 ");

	}
	else
	{
		printf("0 1 ");
		fib(n,1,0);
		printf("\n");
	}

}
int main()
{
	int n;
	printf("Enter how many fibanocii numbers to print:");
	scanf("%d",&n);
	print(n);

	return 0;
}
