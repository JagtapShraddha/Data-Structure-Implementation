#include<stdio.h>
int binary_search(int *arr,int size,int data)
{
	int left=0;
	int right=size-1;
	int mid;
	int flag=0;

	while(left <= right && flag==0)

	{
		mid=(left+right)/2;
		if(data==arr[mid])
		{
			flag=1;
			return mid;
		}
		else if(data > arr[mid])
		{
			left=mid+1;

		}
		else
		{
			right=mid-1;
		}
	}
	
}
void main()
{
	int myarr[]={1,5,10,15,20,25,30,35,40,45,50};
	int size=sizeof(myarr)/sizeof(int);
	int a=binary_search(myarr,size,35);
	printf("%d",a);
}


