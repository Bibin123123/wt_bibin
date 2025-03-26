#include<stdio.h>
#include<ctype.h>
#include<string.h>
char stack[100],prefix[100],ex[100];
int top=-1,j=-1;
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
 void strrev(char ex[])
{
	char temp;
	int length,i,j;
	length=strlen(ex);
	for(i=length-1,j=0;j<i;i--,j++)
	{
		temp=ex[j];
		ex[j]=ex[i];
		ex[i]=temp;

	}




}
 void bracket( char ex[])
{
	int i;
	while(ex[i]!='\0')
	{
		if(ex[i]=='(')
		{
			ex[i]=')';
		}
		else if(ex[i]==')')
		{
			ex[i]='(';
		}
		i++;
	}

}



void infixtoprefix(char ex[])
{
	char temp;
	int i,a;
	i=0;
	while(ex[i]!='\0')
	{
		temp=ex[i];
		if(isalnum(temp))
		{
			j++;
			prefix[j]=temp;


		}
		else if(temp=='(')
		{
			push(temp);


		}
		else if(temp==')')
		{
			while((a=pop())!='(')
			{
		    		j++;
                                prefix[j]=a;


			}

		}
		else
		{
			while(top!=-1&&pre(stack[top])>pre(temp))
			{
				j++;
                                prefix[j]=pop();


			}
			push(temp);


		}
		i++;
	}
	while(top!=-1)
	{
		j++;
                prefix[j]=pop();



	}



}
int main()
{
	char pre[100];
	char ex1[100];
	printf("Enter the expression:");
        scanf("%s",ex);
	bracket(ex);
	strrev(ex);
	infixtoprefix(ex);
	strrev(prefix);
	printf("%s\n",prefix);
	return 0;
}

