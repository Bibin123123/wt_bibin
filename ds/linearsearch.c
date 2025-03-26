#include <stdio.h>
int main()
{
	int a[100],i,key,size;
	printf("Enter the array size: ");
	scanf("%d",&size);
	printf("Enter the numbers:");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the search key:");
	scanf("%d",&key);
	for(i=0;i<size;i++)
	{
		if(key==a[i])
		{
			printf("key found:\n");
			return 0;
		}
	}
	printf("key not found:\n");

	return 0;
}
