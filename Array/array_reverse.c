#include<stdio.h>
void reverse(int *arr,int size)
{
	int temp[size];
	int val,j=0;
	for(int i=size-1;i>=0;i--){
		val=arr[i];
		temp[j]=val;
		j++;
		
	}

	for(int i=0;i<size;i++){
		printf("%d\n",temp[i]);
	}
}
void main()
{
	int size;
	int arr[size];
	printf("how many elements u want\n");
	scanf("%d",&size);
	printf("Enter the elements of array\n");
	for(int i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	reverse(arr,size);
}
	

