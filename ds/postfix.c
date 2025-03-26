#include <stdio.h>
#include <ctype.h>
int post[10],top=-1;
void push( int x)
{
	top++;
	post[top]=x;

}
int pop()
{
	int y;
	y=post[top];
	top--;
	return y;
}
int main()
{
	char ex[10],e;
	int num,a,b,res,i,n;
	printf("Enter the expression:");
	scanf("%s",ex);
	i=0;
	while(ex[i]!='\0')
	{
		e=ex[i];
		if(isalnum(e))
		{
			num=e-'0';
			push(num);

		}
		else
		{
			b=pop();
			a=pop();
			switch(e)
			{
				case'+':
					res=a+b;
					push(res);
					break;
				case'-':
					res=a-b;
					push(res);
					break;
				case'*':
					res=a*b;
					push(res);
					break;
				case'/':
					res=a/b;
					push(res);
					break;

			}

		}
		i++;

	}
	printf("%d\n",pop());

	return 0;
}
