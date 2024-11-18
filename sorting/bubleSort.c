#include<stdio.h>

int main(){
int arr[]= {23,12,4,6};
int arrSize = sizeof(arr)/sizeof(int);

	for(int i=0;i<arrSize-1;i++){
		for(int j=i+1;j<arrSize;j++){
			if(arr[i] < arr[j])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
			
		}
	}
	for(int i=0;i<arrSize;i++){
		printf("%d ",arr[i]);
	}
}
