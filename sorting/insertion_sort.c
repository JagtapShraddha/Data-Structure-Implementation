#include<stdio.h>
void insertion_sort(int *arr,int n){
	int i;
	int j;
	int k;
	int temp;
		for(i=1;i<n;i++){
			 temp=arr[i];
			 j=i-1;
				while(temp<arr[j] && j>=0){
					arr[j+1]=arr[j];
					j--;
					}
					arr[j+1]=temp;
				}	
		
	
	
	}
void main(){
	int a[]={10,5,1,3,0,6,4,2};
	int size=sizeof(a)/sizeof(int);
	insertion_sort(a,size);
	for(int i=0;i<size;i++){
		printf("%d\t",a[i]);
	}
}
