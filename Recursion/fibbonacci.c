#include<stdio.h>
void fibbonacci(int t1,int t2,int n){
	if(n<0){
		return;
	}
printf("%d ",t1);
fibbonacci(t2,t1+t2,n-1);

}
/*int fibbonacci(int n){
	if(n<=1){
		return n;
	}
	int last=fibbonacci(n-1);
	int slast=fibbonacci(n-2);
	return last+slast;

}*/
int  main(){
	int t1=0;
	int t2=1;
	int next;
	fibbonacci(t1,t2,10);
	//printf("%d",fibbonacci(4));
	return 0;
}
