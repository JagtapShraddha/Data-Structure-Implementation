#include<stdio.h>
void ksort(int *arr,int n)
{
	int i=0,j=n-1;
	int pivot=arr[i];
	int temp;
	while(i!=j)
	{
		if(arr[j]<=pivot)
		{
			if(arr[i]>=pivot)
			{
				temp=arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
		
			}
			else
			{
				i++;
			}

		}
		else
		{
			j--;
		}
	}
	for(int i=0;i<n;i++)
	{
	printf("%d\n",arr[i]);
	}
}
int main()
{
	int myarr[]={6,7,14,5,8,2};
	int size=sizeof(myarr)/sizeof(int);
	ksort(myarr,size);
	return 0;
}



