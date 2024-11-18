#include<stdio.h>
void reversearray(int n,int *arr)
{
	int i=0;
	int j=n-1;
	int temp;

	while(i<j)
	{
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
		i++;
		j--;
	}
	

	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
}
int main()
{
	int arr[]={1,2};
	int n=sizeof(arr)/sizeof(int);

	reversearray(n,arr);
	return 0;
}

