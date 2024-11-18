#include<stdio.h>
int secondmax(int *arr,int n)
	{
	int max=0;
	int second=0;
	for(int i=0;i<n;i++){
		if(arr[i]>max & arr[i]!=max){
			second=max;
			max=arr[i];
			}
		}
		return second;
	}
void main()
{
 int myarr[]={7,8,4,8,2,9,9};
 int n=sizeof(myarr)/sizeof(int);
 printf("%d",secondmax(myarr,n));
 }
