#include<stdio.h>
int sum(int *arr,int n,int sm){
	if(n<0){
		return sm;
	}
	sm=sum(arr,n-1,sm+arr[n-1]);
}
void main(){
	int arr[]={1,2,3,4,5,6,7};
	int size=sizeof(arr)/sizeof(int);
	int add=0;
	printf("%d",sum(arr,size,add));
}
