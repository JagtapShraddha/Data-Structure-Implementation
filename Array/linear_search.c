#include<stdio.h>
int linear_search(int *arr,int size,int key)
{
	for(int i=0;i<size;i++)
	{
		if(arr[i]==key)
		{
			return i;
			
		}
		else
			i++;

	}
	return -1;

}
void main()
{
	int myarr[]={12,10,4,8,11,43};
	int size=sizeof(myarr)/sizeof(int);
	int k=15;
	printf("index of %d is %d",k,linear_search(myarr,size,k));
}

