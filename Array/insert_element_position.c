#include<stdio.h>
void insert_ele_at_position(int *arr,int size,int ele,int pos)
{
	int temp;
	int i=0;
	while(i<pos)
	{
		i++;

	}
	temp=arr[i];
	arr[i]=ele;
	i++;
	
	for(i=i;i<=size;i++)
	{
		ele=temp;
		temp=arr[i];
		arr[i]=ele;
	}
//	for(i=0;i<=size;i++)
//	{
//		printf("%d\t",arr[i]);

//	}
}
void main()
{
	int myarr[]={1,2,3,4,5};
	int size=sizeof(myarr)/sizeof(int);
	int ele=9;
	int pos=3;
	insert_ele_at_position(myarr,size,ele,pos);
	for(int i=0;i<=size;i++)
	{
		printf("%d\t",myarr[i]);

	}

}

