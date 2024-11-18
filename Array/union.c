#include<stdio.h>
void main()
{
	int i=0,j=0;
	int temp1,temp2,size;
	int flag=0;

	int arr1[]={1,4,7,9};
	int arr2[]={2,3,6,7,8};
	int size1=sizeof(arr1)/sizeof(int);
	int size2=sizeof(arr2)/sizeof(int);
	
	while(i<size1)
	{
	if(arr1[i]>arr2[j])
	{
		temp1=arr1[i];
		arr1[i]=arr2[j];
		
		
		temp2=arr[i+1];
		arr[i+1]=temp1;
		
		
	}
	else if(arr1[i]<arr2[j])
	{
		i++;
	}
	else
	{
		i++;
		j++;
	}
	}
	while(j<size2)
	{
		
		arr1[i]=arr2[j];
		i++;
		j++;
	}
		size=i;
		for(i=0;i<size;i++)
		{
		printf("%d\n",arr1[i]);
		}
	}
		
		
		
