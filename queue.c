#include <stdio.h>
int queue[100],l,rear=-1,front=-1;

void enqueue()
{
	int num;
	printf("Enter a number:");
	scanf("%d",&num);
	if(rear==l-1)
	{
		printf("overflow\n");

	}
	else if(rear=-1)
	{
		rear=0;
		front=0;
		queue[rear]=num;

	}
	else
	{
		rear++;
		queue[rear]=num;
	}

}

void dequeue()
{
	if(front==-1)
	{
		printf("empty\n");

	}
	else if(front==rear)
	{
		front=-1;
		rear=-1;

	}
	else
	{
		front++;

	}


}
void display()
{
	int i;
	for(i=front;i<=rear;i++)
	{
		printf("%d\n",queue[i]);

	}


}



int main()
{
	int ch;

	printf("Enter the  queue size:");
	scanf("%d",&l);
	do
	{
		printf("1 for enqueue\n2for dequeue\n3 for display\n4 for exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				enqueue();
				break;
			case 2:
				dequeue();
				break;
			case 3:
				display();
				break;
			case 4:
				printf("Exit");

		}

	}while(ch!=3);
	return 0;
}
