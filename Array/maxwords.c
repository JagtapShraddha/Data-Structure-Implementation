#include<stdio.h>
void main()
{
	int arr[]={5,8,17,12,6,18,3,3,18,3,10,1,1,4,5, 9, 1};
	int size=sizeof(arr)/sizeof(int);
	int i=0;
	int count=0;
	int finalcount=0;
	int sum=0;
	int space=0;
	

	while(i< size)
	{
		sum=sum+space+arr[i];

		if(sum>50)
		{
			
			count=0;
			sum=0;
			space=0;
			
		}
		else
		{
		
			
			i++;
			count++;
			space=1;
			
		

			if(count>finalcount)
			{

				finalcount=count;
			}
		}
	
	}
	
	printf("%d",finalcount);
}
			
