// Write a C program to find the sum of first 10 natural numbers.
#include<stdio.h>
int main(){
	int a=10,b,sum=0;
	printf("First ten natural numbers::");
	for(b=0;b<=a;b++) 
	{
	printf("%d ",b);
	sum=sum+b;
	}
	
	printf("\nsum %d",sum);
	return 0;
}