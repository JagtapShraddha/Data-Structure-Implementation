#include<stdio.h>
void insert_ele_last(int *arr ,int size,int no)
{
	int i=size;
	arr[i]=no;
	for(int i=0;i<=size;i++)
	{
		printf("%d",arr[i]);
	}

}
void main()
{
	int myarr[]={1,2,3,4};
	int size=sizeof(myarr)/sizeof(int);
	insert_ele_last(myarr,size,5);
}

