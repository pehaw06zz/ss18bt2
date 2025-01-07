#include<stdio.h>
void swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
	
}
int main(){
	int a=10;
	int b=7;
	printf("\ngia tri hien tai cua a=%d b=%d ",a,b);
	swap(&a,&b);
	printf("\ngia tri sau khi thay doi a=%d b=%d",a,b);
	
	
	return 0;
}
