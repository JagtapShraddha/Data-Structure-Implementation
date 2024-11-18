#include<stdio.h>
void remove_duplicate(int *arr,int size)
{
	
	int j=0;
	
	for(int i=1;i<size;i++){
		if(arr[i]!=arr[j])
		{
			j++;
			arr[j]=arr[i];
		}

	}
	size=j+1;
	for(int i=0;i<size;i++){
		printf("%d\n",arr[i]);
	}
}

void main()
{
	int myarr[]={1,2,2,3,3,3};
	int size=sizeof(myarr)/sizeof(myarr[0]);
	remove_duplicate(myarr,size);
	
}
