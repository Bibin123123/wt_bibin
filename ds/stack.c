#include <stdio.h>
int stack[100],top=-1,n;
void push()
{
	if(top==n-1)
	{
		printf("Overflow\n");
	}
	else
	{
		int num;
		printf("Enter the number:");
		scanf("%d",&num);
		top++;
		stack[top]=num;
	}

}

void pop()
{
	if(top==-1)
	{
	printf("Underflow\n");
	}
	else
	{

		top--;
	}
}
void show()
{
	int i;
	for(i=top;i>=0;i--)
	{
		printf("%d\n",stack[i]);
	}

}


int main()
{
	int ch;
	printf("Enter the number of elements in the stack");
	scanf("%d",&n);
	do
	{
		printf("\n1 for push\n2 for pop\n3 for show\n4 for exit\n");
		scanf("%d",&ch);
		printf("\n");
		switch(ch)
		{
			case 1:
			push();
			break;

			case 2:
			pop();
			break;

			case 3:
			show();
			break;
		}

	}while(ch!=4);

	return 0;
}
