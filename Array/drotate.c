#include<stdio.h>
void drotate(int *arr,int size,int d)
{
	int temp;
	for(int i=0;i<d;i++){
		for(int j=0;j<size-1;j++){
	temp=arr[j];
	arr[j]=arr[j+1];
	arr[j+1]=temp;
		}
	}
	for(int i=0;i<size;i++)
	{
		printf("%d\n",arr[i]);
	}

}
void main()
{
	int myarr[]={1,2,3,4};
	int size=sizeof(myarr)/sizeof(int);
	drotate(myarr,size,3);
}
