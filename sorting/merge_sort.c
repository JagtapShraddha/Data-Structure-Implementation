#include<stdio.h>
void merge(int *a,int mid ,int low,int high){
	int b[100];
	int i,j,k;
	k=low;
	i=low;
	j=mid+1;
	while(i<=mid && j<=high){
			if(a[i]<a[j]){
				b[k]=a[i];
				i++;
				k++;
			}
			else{
				b[k]=a[j];
				k++;
				j++;
			}
			
		}
		while(i<=mid){
			b[k]=a[i];
			i++;
			k++;
		}
		while(j<=high){
			b[k]=a[j];
			j++;
			k++;
		}
		
		for(i=low;i<=high;i++){
			a[i]=b[i];
		
		}
		
	
	}
void msort(int *arr,int low,int high){
	
	if(low<high){
		int mid=(low+high)/2;
		msort(arr,low,mid);
		msort(arr,mid+1,high);
		merge(arr,mid,low,high);
	}
	
}

void main()
{

	int arr[]={7,3,5,1,9,2,6,4,0};
	int size=sizeof(arr)/sizeof(int);
	msort(arr,0,size-1);
	
	for(int i=0;i<size;i++){
		printf("%d\t",arr[i]);
	}


}
