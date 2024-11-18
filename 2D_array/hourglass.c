#include<stdio.h>
int hourglasssum(int arr[50][50],int i,int j){
	int sum=0;
	sum=arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];
	//printf("%d",sum);
	return sum;
}
int main()
{
	int i,j,row,col;
	int arr[50][50];
	int end,addition;
	int maxsum=0;
	
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
	end=i-2;

	for(int i=0;i<end;i++)
	{
		for(int j=0;j<end;j++)
		{
			 addition = hourglasssum(arr,i,j);
			 if(addition>maxsum)
			{
			maxsum=addition;
			}	
			
		}
		
	}
	printf("%d",maxsum);
			
	return maxsum;
}
