#include <stdio.h>
int main()
{
	int a[100][100],b[100][100],s[100][100],r,c,r2,c2,i,j,k,sum;
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
	printf("Enter the second array row and column");
        scanf("%d%d",&r2,&c2);
	printf("Enter the second array numbers:");
        for(i=0;i<r2;i++)
        {
                for(j=0;j<c2;j++)
                {
                        scanf("%d",&b[i][j]);

                }

        }
	if(c==r2)
	{

		for(i=0;i<r;i++)
	        {
        	        for(j=0;j<c2;j++)
        	        {
				sum=0;
                	        for(k=0;k<c;k++)
				{
					sum=sum+a[i][k]*b[k][j];
				}
				s[i][j]=sum;

             	       }

      	        }
		printf("\n");
	        for(i=0;i<r;i++)
	        {
        	        for(j=0;j<c2;j++)
        	        {
                	        printf("%d ",s[i][j]);

                }
               	        printf("\n");
                }
	}
	else
	{
		printf("error\n");
	}




	return 0;
}
