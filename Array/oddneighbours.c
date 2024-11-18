#include<stdio.h>
int oddneighbours(int *arr,int n)
{
	int i=0;
	int count=0;
	int finalcount=0;
	
	int flag=0;

	if(n>0)
	{
	
	 while(i<n)
	 {
	 	int value=arr[i];
		 if(value%2==0 && flag==0)
		 	{
		 		count++;
		 		i++;
		 		value=arr[i];
		 		flag=1;
		 	}
		 else if(value%2==1)
		 	{
		 		count++;
		 		i++;
		 		value=arr[i];
		 		flag=0;
		 	}
		 else
		 	{
		 	if(count>finalcount)
		 		{
		 		finalcount=count;
		 		count=0;
		 		flag=0;
		 		
		 		}
		 	else
		 	{
		 	count=0;
		 	flag=0;
		 	
		 	}
		 	}
		}
	}
	if(count>finalcount)
	{
		finalcount=count;
	}
	return finalcount;
}
void  main()
{
	int arr[]={10,8,8,10,5,6,3,6};
	int n=sizeof(arr)/sizeof(int);
	printf("length of longest segment\n");
	int b=oddneighbours(arr,n);
	printf("%d",b);
}

