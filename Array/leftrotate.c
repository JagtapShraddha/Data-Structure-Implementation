#include<stdio.h>
void leftrotate(int *arr ,int size)
{
	int temp;
	temp=arr[0];
	for(int i=1;i<size;i++)
	{
		arr[i-1]=arr[i];
	}
	arr[size-1]=temp;

	for(int i=0;i<size;i++){
		printf("%d\n",arr[i]);
	}

}
void main()
{
	int myarr[]={1,2,3,4,5};
	int size=sizeof(myarr)/sizeof(int);
	leftrotate(myarr,size);
}
