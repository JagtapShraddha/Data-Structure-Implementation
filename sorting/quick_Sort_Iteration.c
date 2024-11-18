#include <stdio.h>
#include <stdlib.h>
int partition(int *arr,int low,int high){
	int pivot=arr[low];
	int i=low+1;
	int j=high;
	int temp;
	
	do{
		while(arr[i]<=pivot){
			i++;
			}
		while(arr[j]>pivot){
			j--;
			}
		if(i<j){
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
	
	}while(i<j);
		
			temp=arr[low];
			arr[low]=arr[j];
			arr[j]=temp;
		
		return j;
	

}

void quicksort(int arr[], int low, int high) {
    while (low < high) {
        int p = partition(arr, low, high);

   
        if (p - low < high - p) {
            quicksort(arr, low, p - 1);
            low = p + 1;
        } else {
            quicksort(arr, p + 1, high);
            high = p - 1;
        }
    }
}

void print(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int size=10;
	int arr[size];
	for (int i = 0; i < size; i++) {
        arr[i] = (rand() % 100);
    }
	printf("Original array:\n");
	print(arr,size);
	
	quicksort(arr,0,size-1);
	
	printf("\nSorted array:\n");
	print(arr,size);
	
	
    return 0;
}
