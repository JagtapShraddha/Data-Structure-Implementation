#include<stdio.h>

void matadd(int a[50][50],int b[50][50],int row,int col){
	
	int temp[row][col];
	
	
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			temp[i][j]=a[i][j]+b[i][j];
			}
		
		}
		for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			printf("%d\t",temp[i][j]);
			}
			printf("\n");
		
		}


}

void main(){

	int mat1[50][50],row,col;
	int mat2[50][50];
	printf("Enter no of row and columns\n");
	scanf("%d%d",&row,&col);
	
	printf("Enter elements of first matrix\n");
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			scanf("%d",&mat1[i][j]);
			}
			
		}
		printf("Enter elements of second matrix\n");
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			scanf("%d",&mat2[i][j]);
			}
			
		}
	
	matadd(mat1,mat2,row,col);
	
}
