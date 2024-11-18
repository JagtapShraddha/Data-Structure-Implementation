#include<stdio.h>
void union_array(int *arr1,int size1,int *arr2,int size2)
{
	int temp;
	int size;
	int i=0;
	int j=0;
	
	while(i<size1)
	{
	if(arr1[i]=arr2[j])
	{
		j++;
	}
	else if(arr1[i]<arr2[j])
	{
		i++;
		printf("%d\n",arr1[i]);
	}
	else 
	{
		temp=arr1[i];
		arr1[i]=arr2[j];
		arr2[j]=temp;
		i++;
	}
	}
	for(i=0;i<size1;i++)
	{
		printf("%d\n",arr1[i]);
	}
	while(j<size2)
	{
		arr1[i]=arr2[j];
		j++;
		i++;
	}
	
	size=i;
	
	for(i=0;i<size;i++)
	{
		printf("%d\n",arr1[i]);
	}
}
void main()
{
int myarr1[]={1,2,4,5};
int myarr2[]={3,6,7,8};
	printf("%d",myarr1[0]);
	int size1=sizeof(myarr1)/sizeof(int);
	int size2=sizeof(myarr2)/sizeof(int);
	union_array(myarr1,size1,myarr2,size2);
	
}
