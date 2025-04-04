#include <stdio.h>
int queue[100],l,rear=-1,front=-1;

void enqueue()
{
	int num;
	printf("Enter a number:");
	scanf("%d",&num);
	if((rear+1)%l==front)
	{
		printf("full\n");

	}
	else if(rear==-1)
	{
		rear=0;
		front=0;
		queue[rear]=num;

	}
	else
	{
		rear=(rear+1)%l;
		queue[rear]=num;
	}

}

void dequeue()
{
	if(front==-1)
	{
		printf("empty\n");

	}
	else if(rear==front)
	{
		front=rear=-1;

	}
	else
	{
		front=(front+1)%l;
	}


}
void display()
{
	int i;
	i=front;
	while(1)
	{
		printf("%d\n",queue[i]);
		if(i==rear)
		{
			break;
		}
		i=(i+1)%l;

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
				printf("Exit\n");
				break;

			default:
				printf("invalid\n");

		}

	}while(ch!=4);
	return 0;
}
