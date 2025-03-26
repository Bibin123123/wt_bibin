#include <stdio.h>
void sort(int a[],int size)
{
	int i,j,temp;
	for(i=1;i<size;i++)
	{
		j=i-1;
		temp=a[i];

		while(j>=0&&a[j]>temp)
		{
			a[j+1]=a[j];
			j=j-1;

		}
		a[j+1]=temp;


	}


}



int main()
{
	int a[100],l,i;
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

