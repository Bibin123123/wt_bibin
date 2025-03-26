#include <stdio.h>
int l;
void insertion(int arr1[])
{
	int  i,pos,num;
	printf("Enter the position :");
	scanf("%d",&pos);
	printf("Enter the number:");
	scanf("%d",&num);
	pos=pos-1;
	for(i=l;i>pos;i--)
	{
		arr1[i]=arr1[i-1];
	}
	arr1[pos]=num;

	for(i=0;i<l;i++)
        {
                printf("%d\n",arr1[i]);

        }


}

void deletion(int arr2[])
{

	int i,pos;
	printf("enter the position :");
	scanf("%d",&pos);
	pos=pos-1;
	for(i=pos;i<l-1;i++)
	{
		arr2[i]=arr2[i+1];

	}
	l--;

	for(i=0;i<l;i++)
        {
                printf("%d\n",arr2[i]);

        }



}


void traversal(int arr3[],int l3)
{
	int i;
	for(i=0;i<l3;i++)
        {
                printf("%d\n",arr3[i]);

        }

}

void merging(int arr4[],int size)
{
	int arr5[100],i,arr[100],j,len,le;
	printf("Enter the 2nd array size:");
	scanf("%d",&le);
	printf("enter the numbers:");
	for(i=0;i<le;i++)
        {
                scanf("%d",&arr5[i]);

        }
	l=le+size;
	for(j=size;j<l;j++)
	{
		arr4[j]=arr5[j-size];
	}


	printf("updated array;\n");
	for(i=0;i<l;i++)
        {
                printf("%d\n",arr4[i]);

	}



}



int main()
{
	int a[100],i,ch,c;
	printf("Enter the array size: ");
	scanf("%d",&l);
	printf("Enter the numbers:\n");
	for(i=0;i<l;i++)
	{
		scanf("%d",&a[i]);

	}
	do
	{
		printf("\n1 for insertion\n2 for deletion\n3 for traversal\n4  for merging\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				l++;
				insertion(a);
				break;
			case 2:

				deletion(a);
				break;
			case 3:
				traversal(a,l);
				break;
			case 4:
				merging(a,l);
				break;
			default:
				printf("invalid\n");

		}
		printf("1 for continue:\n");
		scanf("%d",&c);
	}while(c==1);

	return 0;
}

