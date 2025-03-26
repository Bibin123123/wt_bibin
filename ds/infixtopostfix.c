#include <stdio.h>
#include <ctype.h>
int stack[100],top=-1;
void push(char x)
{
	top++;
	stack[top]=x;

}
char pop()
{
	char y;
	y=stack[top];
	top--;
	return y;


}
int pre(char p)
{
	if(p=='^')
	{
		return 3;
	}
	else if(p=='/'||p=='*')
	{
		return 2;
	}
	else if(p=='+'||p=='-')
	{
		return 1;
	}
	else
	{
		return 0;
	}


}

int main()
{
	char ex[10],temp;
	int i,a;
	i=0;
	printf("Enter the expression:");
	scanf("%s",ex);
	while(ex[i]!='\0')
	{
		temp=ex[i];
		if(isalnum(temp))
		{
		 printf("%c",temp);

		}
		else if(temp=='(')
		{
			push(temp);
		}
		else if(temp==')')
		{
			while((a=pop())!='(')
			{
		    		printf("%c",a);
			}

		}
		else
		{
			while(top!=-1&&pre(stack[top])>=pre(temp))
			{
				printf("%c",pop());
			}
			push(temp);


		}
		i++;
	}
	while(top!=-1)
	{
		printf("%c",pop());

	}
	printf("\n");

	return 0;
}
