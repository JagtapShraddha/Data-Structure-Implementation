#include<stdio.h>
void transpose(int arr[50][50],int row,int col){
	int temp;
	
		for(int i=0;i<row;i++)
		{
			for(int j=i+1;j<col;j++)
			{
		
			temp=arr[i][j];
			arr[i][j]=arr[j][i];
			arr[j][i]=temp;
		
			}
		
		}	
		for(int i=0;i<row;i++){
			for(int j=0;j<col;j++){
			
			printf("%d\t",arr[i][j]);
			}
			printf("\n");
		}
		
}
int main()
	{
	int arr[50][50],row,col;
	scanf("%d%d",&row,&col);
	
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			scanf("%d",&arr[i][j]);
			}
			
		}
		transpose(arr,row,col);
	}
	
			
	

