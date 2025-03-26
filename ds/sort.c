#include <stdio.h>
void sort(int a[],int n)
{
	int temp,i,j;

	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[i])
			{

				temp=a[j];
				a[j]=a[i];
				a[i]=temp;

			}
		}

	}
}

void print(int a[],int n)
{
	int i;
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);

	}

}
int main()
{
	int a[100],l,i;
	printf("Enter the array size:");
	scanf("%d",&l);
	printf("Enter the numbers:");
	for(i=0;i<l;i++)
	{
		scanf("%d",&a[i]);

	}
	sort(a,l);
	print(a,l);

	return 0;
}
