#include<stdio.h>
int max(int *arr,int n)
{
int max=0;
 for(int i=0;i<n;i++){
 	
 	if(max<arr[i]){
 	max=arr[i];
 	
 	}
 }
 return max;
 }
void main()
{
 int myarr[]={5,3,2,8,1};
 int size=sizeof(myarr)/sizeof(int);
 printf("%d",max(myarr,size));
 }
 
