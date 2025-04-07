#include <stdio.h>
int a[100][100];
void sparse(int r,int c)
{
	int sp[100][3],s=0,i,j;
        for(i=0;i<r;i++)
        {
                for(j=0;j<c;j++)
                {
                        if(a[i][j]!=0)
			{
				sp[i+1][0]=i+1;
				sp[i+1][1]=j+1;
				sp[i+1][2]=a[i][j];
				s++;

			}
                }

        }

	sp[0][0]=r;
	sp[0][1]=c;
	sp[0][2]=s;

        for(i=0;i<r+1;i++)
        {
                for(j=0;j<c;j++)
                {
                        printf("%d ",sp[i][j]);
                }
                printf("\n");

        }



}
int main()
{
	int r,c,i,j;

	printf("Enter the row and column:");
	scanf("%d%d",&r,&c);
	printf("Enter the numbers:");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}

	}


	for(i=0;i<r;i++)
        {
                for(j=0;j<c;j++)
                {
                        printf("%d ",a[i][j]);
                }
		printf("\n");

        }
	printf("\n");
	sparse(r,c);

	return 0;
}
