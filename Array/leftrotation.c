#include<stdio.h>
void reversearray(int arr[],int start,int end)
{
    int temp;

    while(start<end)
    {
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}
void leftrotate(int n,int d,int arr[])
{
    if (n == 0) return;
    
    

        if (d == 0) return;
    
int i=0;
reversearray(arr,i,d-1);
reversearray(arr,d,n-1);
reversearray(arr,i,n-1);

for( i=0;i<n;i++)
{
printf("%d\t",arr[i]);
}
}
int main()
{
    int d, n;
   
   
    scanf("%d",&n);
    
    
    scanf("%d",&d);
     int arr[n];
   
    
    for(int i=0;i<n;i++)
    {
       scanf("%d",&arr[i]);
    }
    
   
    
    leftrotate(n,d,arr);
    return 0;
    
}

