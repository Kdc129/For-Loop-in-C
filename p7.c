// Write a program in C to display the n terms of odd natural number and their sum
#include<stdio.h>

int main(){
          int i,n,sum=0;
          printf("input ::");
          scanf("%d",&n);
          printf("The odd numbers from 1 to %d are ::\n",n);
           printf("\nThe odd numbers are::");
          for(i=1;i<=n;i++)
          {
             
              if(i%2 != 0)
            
             
                       printf("%5d",i);
                       sum=sum+i/2;
                    
             
                       
          }         
             
             
            printf("\nThe Sum of odd Natural Number upto %d terms :%d",n,sum);
             
             
          
                return 0;
}