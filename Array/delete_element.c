#include<stdio.h>
void delete(int *arr,int size,int ele)
{
	int i=0;
	while(arr[i]!=ele)
	{
		i++;
	}
	for(i=i;i<size-1;i++)
	{
		arr[i]=arr[i+1];
	}

}
void main()
{
	int myarr[]={1,2,3,4,5,6};
	int size=sizeof(myarr)/sizeof(int);
	delete(myarr,size,4);
	for(int i=0;i<size-1;i++)
	{
		printf("%d ",myarr[i]);


	}

}


