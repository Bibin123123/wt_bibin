#include <stdio.h>
#include <stdlib.h>
struct node *head=0,*prevnode,*newnode,*newnode1,*temp,*temp2;



struct node{

	int data;
	struct node *next;

};


struct node* createnode()
{
newnode1=(struct node*)malloc(sizeof(struct node));

	return newnode1;

}
void inseartAtBeg( )
{

	newnode=createnode();
	printf("Enter a number:");
	scanf("%d",&newnode->data);
	newnode->next=0;
	if(head==0)
	{
		head=temp=newnode;
		head->next=head;

	}
	else
	{
		temp=head;
		while(temp->next!=head)
		{
			temp=temp->next;
		}
		newnode->next=head;
		head=newnode;
		temp->next=head;
	}

}
void inseartatend()
{
	newnode=createnode();
        printf("Enter a number:");
        scanf("%d",&newnode->data);
        newnode->next=0;
        if(head==0)
        {
                head=temp=newnode;

        }
        else
        {
		temp=head;
                while(temp->next!=head)
		{

			temp=temp->next;
		}
		temp->next=newnode;
		newnode->next=head;
        }




}
void inseartatspecific()
{
	int pos;
	newnode=createnode();
        printf("Enter a number:");
        scanf("%d",&newnode->data);
        newnode->next=0;
	printf("Enter the position:");
	scanf("%d",&pos);
        if(head==0)
        {
                head=temp=newnode;

        }
        else
        {
                temp=head;
		int i=1;
		while(i<pos-1)
		{
			temp=temp->next;
			i++;
		}
		newnode->next=temp->next;
		temp->next=newnode;
        }


}
void display()
{
	printf("\n");
	temp=head;
	do
	{
		printf("%d\n",temp->data);
		temp=temp->next;

	}
	while(temp!=head);


}
void DeleteAtBeg()
{
	temp2=head;
	while(temp2->next!=head)
	{
		temp2=temp2->next;

	}

        temp=head;
	head=temp->next;
	free(temp);
	temp2->next=head;


}
void DeleteAtEnd()
{
	temp=head;
        while(temp->next!=head)
        {
          	prevnode=temp;
                temp=temp->next;
        }
        prevnode->next=head;
	free(temp);




}
void DeleteAtSpecific()
{
	int pos;
	printf("enter the position:");
	scanf("%d",&pos);
       temp=head;
       int i=1;
       while(i<pos)
       {
		prevnode=temp;
                temp=temp->next;
                i++;
       }
       prevnode->next=temp->next;
       free(temp);



}
int main()
{
  	int ch;
        do
        {
                printf("1 for insert at begining\n2for insert at end\n3 for insert at specific position\n4 for Delete from begining\n5delete from end\n6 for delete from specific position\n7 for display\n8 for exit\n");
                scanf("%d",&ch);
                switch(ch)
                {
                        case 1:
                                inseartAtBeg();
                                break;
                        case 2:
                                inseartatend();
                                break;
                        case 3:
                                inseartatspecific();
                                break;
                        case 4:
                               	DeleteAtBeg();
                                break;
			case 5:
				DeleteAtEnd();
				break;
			case 6:
				DeleteAtSpecific();
				break;
			case 7:
				display();
				break;
			case 8:
				printf("Exit\n");
				break;

                        default:
                                printf("invalid\n");

                }

        }while(ch!=8);
        return 0;
}

