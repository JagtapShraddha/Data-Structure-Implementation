#include<stdio.h>
#include<limits.h>

int findmax(int *arr,int n){
	int max=INT_MIN;
	for(int i=0;i<n;i++){
		if(max<arr[i]){
			max=arr[i];
		}
	}
	return max;
}
void countsort(int *arr,int n,int max){
	int newarr[max+1];
 	int i,j;
	for( i=0;i<=max;i++){
		newarr[i]=0;
	}
	for( i=0;i<n;i++){
		 j=arr[i];
		newarr[j]++;
	}
	j=0;
	i=0;
	while(i<=max){
		if(newarr[i]>0){
			arr[j]=i;
			newarr[i]--;
			j++;
		}
		else{
			i++;
		}
	}
}
void printarr(int *arr,int n){
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}

}
void main(){
	int arr[]={1,9,5,2,7,6,5};
	int size=sizeof(arr)/sizeof(int);
	printarr(arr,size);
	int max=findmax(arr,size);
	countsort(arr,size,max);	
	printf("\n");
	printarr(arr,size);
	
}
