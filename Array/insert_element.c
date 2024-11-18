#include<stdio.h>
void insert_element(int *arr,int size,int ele)
{
	int temp;
	int i=0;
	while(arr[i]<=ele)
	{
		i++;
	}
	temp=arr[i];
	arr[i]=ele;
	i++;
	while(i<=size)
	{

		ele=temp;
		temp=arr[i];
		arr[i]=ele;
		i++;

	}
	for(int i=0;i<=size;i++)
	{
		printf("%d\t",arr[i]);

	}
}
void main()
{
	int myarr[]={1,2,4,5};
	int size=sizeof(myarr)/sizeof(int);
	insert_element(myarr,size,3);

}

			

