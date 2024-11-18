#include<stdio.h>
void move_zero_to_end(int *arr,int size)
 {
	 int i=0;
	 int j=size-1;
	 int flag;
	 while(i<size){
		 if(i==j)
		 {
			 break;
		}

		 if(arr[i]==0)
		 {
			//flag= check(arr,j);
			 while(arr[j]==0)
			 {
		
				 j--;

			}
			
			 int temp=arr[j];
			 arr[j]=arr[i];
			 arr[i]=temp;
			 j--;
			 i++;

		}
		 else
		 {
			 i++;

		}
		}
	 for(i=0;i<size;i++)
	 {
		 printf("%d",arr[i]);

	}
}




int check(int *arr,int n)
{
	if(arr[n]==0)
	{
		
	}
	else{
		return 1;
	}

}
void main()
{
	int myarr[]={1,0,3,0,0,4,5,0};
	int size=sizeof(myarr)/sizeof(int);
	move_zero_to_end(myarr,size);

}


