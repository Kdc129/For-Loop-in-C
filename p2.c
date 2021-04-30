// Write a program in C to display n terms of natural number and their sum.
#include<stdio.h>

int main(){
          int i,j,n,sum=0;
          printf("Input number::");
          scanf("%d",&n);
          printf("first %d natural number are::",n);
          for(i=0;i<n;i++)
          {
                    printf("%d",i);
                    printf("\n");
                    sum=sum+i;
          }
          printf("\n sum of given natural number are::%d",sum);
          return 0;
}