#include<stdio.h>
void traverse(int arr[50][50],int row,int col)
{
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			printf("%d\t",arr[i][j]);

		}
		printf("\n");
	}
}
int main()
{
	int i,j,row,col;
	int arr[50][50];
	printf("Enter the number of rows\n");
	scanf("%d",&row);
	printf("Enter the number of columns\n");
	scanf("%d",&col);

	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&arr[i][j]);
		}
		printf("\n");
	}

	traverse(arr,row,col);
	return 0;
}
