#include<stdio.h>
void chk_arr_sort(int *arr,int size)
	{
	int flag=0;
	int small=arr[0];
	for(int i=1;i<size;i++){
		if(small>arr[i])
		{
		flag=1;
		
		break;
		}
		
	}if(flag==1)
	{
	printf("array is not sorted\n");
	}
	else
	printf("array is sorted\n");
	
	}
void main()
{
int myarr[]={1,2,2,4};
int size=sizeof(myarr)/sizeof(int);
chk_arr_sort(myarr,size);
}

		
