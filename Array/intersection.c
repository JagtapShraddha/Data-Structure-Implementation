#include<stdio.h>
void main()
{

	int i=0,j=0;
	int temp1,temp2,size;
	int k=0;

	int newarr[100];
	int arr1[]={1,4,7,9};
	int arr2[]={2,4,6,7,8};
	int size1=sizeof(arr1)/sizeof(int);
	int size2=sizeof(arr2)/sizeof(int);
	
	while(i<size1 || j<size2)
	{
	if(arr1[i]=arr2[j])
	{
		arr1[i]=arr2[j];
		i++;
		j++;
		k++;
	}
	else if(arr1[i]<arr2[j])
	{
		i++;
	}
	else
	{
		j++;
	}
	}
	size=k;
	for(k=0;k<size;k++)
	{
	printf("%d\n",newarr[k]);
	}
}
	
