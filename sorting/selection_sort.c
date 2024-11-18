#include<stdio.h>
void selection_sort(int *arr,int n)
{
	int i=0,j,temp,key;

	while(i<n-1){

		temp=arr[i];
		key=i;
		for(j=i+1;j<n;j++)
		{
			if(temp>arr[j])
			{
				key=j;
				temp=arr[j];
			}
		}
		arr[key]=arr[i];
		arr[i]=temp;
		i++;



	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
}
int main()
{
	int myarr[]={10,9,8};
	int size=sizeof(myarr)/sizeof(int);
	selection_sort(myarr,size);
	return 0;
}

	
