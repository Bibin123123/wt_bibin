#include <stdio.h>

void sort(int a[],int l)
{
	int i,j,temp,swap;
	for(i=0;i<l-1;i++)
	{
		swap=0;
		for(j=0;j<l-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				swap=1;

			}

		}
		if(swap==0)
		{
			break;
		}
	}




}
int main()
{
	int a[100],i,l;
	printf("Enter the array size:");
	scanf("%d",&l);
	printf("Enter the numbers:\n");
	for(i=0;i<l;i++)
	{
		scanf("%d",&a[i]);

	}
	sort(a,l);
	printf("\n");
	for(i=0;i<l;i++)
	{
		printf("%d\n",a[i]);
	}


	return 0;
}
