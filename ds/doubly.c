#include <stdio.h>
#include <stdlib.h>
struct node *head=0,*prevnode,*newnode,*newnode1,*temp;



struct node{

	int data;
	struct node *next;
	struct node *prev;

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
	newnode->prev=0;
	if(head==0)
	{
		head=temp=newnode;

	}
	else
	{
		temp=head;
		newnode->next=head;
		head=newnode;
	}

}
void inseartatend()
{
	newnode=createnode();
        printf("Enter a number:");
        scanf("%d",&newnode->data);
        newnode->next=0;
	newnode->prev=0;
        if(head==0)
        {
                head=temp=newnode;

        }
        else
        {
		temp=head;
                while(temp->next!=0)
		{

			temp=temp->next;
		}
		temp->next=newnode;
		newnode->prev=temp;
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
		temp->next->prev=newnode;
		temp->next=newnode;
		newnode->prev=temp;
        }


}
void display()
{
	temp=head;
	while(temp!=0)
	{
		printf("%d\n",temp->data);
		temp=temp->next;

	}


}
void DeleteAtBeg()
{
        temp=head;
	head=temp->next;
	head->prev=0;
	free(temp);


}
void DeleteAtEnd()
{
	temp=head;
        while(temp->next!=0)
        {
          	prevnode=temp;
                temp=temp->next;
        }
        prevnode->next=0;
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
       temp->next->prev=prevnode;
       free(temp);



}
int main()
{
  	int ch;
        do
        {
                printf("1 for insert at beg\n2for insert at end\n3 for insert at specific position\n4 for Delete from beginning\n5 for delete from end\n6 for delete from specific position\n7 for display\n8 for Exit\n");
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
				printf("Exit");
				break;

                        default:
                                printf("invalid\n");

                }

        }while(ch!=8);
        return 0;
}

