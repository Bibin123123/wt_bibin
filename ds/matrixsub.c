#include <stdio.h>
int main()
{
	int a[100][100],b[100][100],s[100][100],r,c,i,j;
	printf("Enter the row and column");
	scanf("%d%d",&r,&c);
	printf("Enter the numbers:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);

		}

	}
	printf("Enter the second array numbers:");
        for(i=0;i<r;i++)
        {
                for(j=0;j<c;j++)
                {
                        scanf("%d",&b[i][j]);

                }

        }
	for(i=0;i<r;i++)
        {
                for(j=0;j<c;j++)
                {
                        s[i][j]=a[i][j]-b[i][j];

                }

        }
	printf("\n");
        for(i=0;i<r;i++)
        {
                for(j=0;j<c;j++)
                {
                        printf("%d ",s[i][j]);

                }
                printf("\n");
        }





	return 0;
}
