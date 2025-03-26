#include <stdio.h>
int main()
{

	int a[100],mid,i,end,beg,size,key,flag=0;
	printf("Enter the array size:");
	scanf("%d",&size);
	printf("Enter the numbers:");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the search key:");
	scanf("%d",&key);
	beg=0;
	end=size-1;

	while(beg<=end)
	{
		mid=(beg+end)/2;
		if(key==a[mid])
		{
			printf("key found \n:");
			printf("location %d\n",mid+1);
			flag=1;
			break;
		}
		else
	 	{
			if(key<a[mid])
			{
				end=mid-1;

			}
			else
			{
				beg=mid+1;

			}

		}

	}

       if(flag==0)
	{
		printf("key not found\n");
	}


	return 0;
}
