#include<stdio.h>
int second_largest(int *arr,int n)
{
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
		if(arr[i]>arr[j]){
		
		int temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
		}
		}
		}
		for(int i=0;i<n;i++){
		printf("%d\n",arr[i]);
		}
		
		/*int i=n-1;	
		while(i>0 && arr[i]==arr[n-1])
		{
		i--;
		}
		
		return arr[i];*/
		for(int i=n-2;i>=0;i--){
			if(arr[i]!=arr[n-1])
			{
			return arr[i];
			break;
			}
		}
		}
void main()
{
int myarr[]={5,4,7,1,2};
int n=sizeof(myarr)/sizeof(int);
//second_largest(myarr,n);
printf("second largest element=%d\n",second_largest(myarr,n));
}
		
