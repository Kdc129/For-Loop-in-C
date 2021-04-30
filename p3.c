// Write a program in C to read 10 numbers from keyboard and find their sum and average.


#include<stdio.h>

int main(){
          int i,j,n,sum=0;
          float average;
          printf("Input first ten numbers ::");
          for(i=0;i<11;i++)
          {
                    printf("elements %d::%d",i,i);
                    printf("\n");
                    sum=sum+i;
               
          }
              average = sum / 10.0;
          printf("\n sum of ten numbers are ::%d",sum);
          printf("\n average of ten numbers are::%f",average);
          return 0;
}