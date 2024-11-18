#include<stdio.h>

int sumsegzero(int *arr,int n)
	{
	int count=0;
	int finalcount=0;
	int flag=0;
	int sum;
	int j;
	int i=0;
	if(n>0)
	{
	while(i < n & flag==0)
	{
	if(arr[i]>=0)
		{
		j=i;
		i--;
		flag=1;
		}
	else
	{
		i++;
	}
	}
	sum=arr[i]+arr[j];
	count=2;
	finalcount=2;
	while(i>0  & j<n)
	{
		
	if(sum==0)
		{
		if(count>finalcount)
			{
			finalcount=count;
			}
		i++;
		}
	else if(sum>0)
		{
			i--;
			sum=sum+arr[i];
			count++;
		}
		
	else 
		{
			j++;
			sum=sum+arr[j];
			count++;
					
		}
	
	}
	}
	return finalcount;
	}
void main()
	{
	int arr[]={-9,-5,-2,0,3,4};
	int n=sizeof(arr)/sizeof(int);
	
	printf("length of longest segment=%d",sumsegzero(arr,n));
	//int b=sumsegzero(arr,n);
	//printf("%d",b);
	}
	
