#include<stdio.h>
void printarr(int arr[],int i,int n){
	
	if(i==n){return;}
	printf("%d",arr[i]);
	printarr(arr,i+1,n);
}
void rev(int *arr,int i,int n){
if(i==n){
	return;
}
else{

	int temp=arr[i];
	arr[i]=arr[n-1];
	arr[n-1]=temp;
	rev(arr,i+1,n-1);
}

}
void main(){
	int arr[]={1,2,3,4};
	int size=sizeof(arr,size);
	printarr(arr,0,size);
	rev(arr,0,size);
	printarr(arr,0,size);
}
