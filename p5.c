// Write a program in C to display the multiplication table of a given integer.
#include <stdio.h>
int main()
{
   int i,n;
   printf("Input the number (Table to be calculated) : ");
   scanf("%d",&n);
   printf("\n");
   for(i=1;i<=10;i++)
   {
     printf("%d X %d = %d \n",n,i,n*i);
   }
} 