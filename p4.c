// Write a program in C to display the cube of the number upto given an integer.
#include<stdio.h>

int main(){
          int i,n;
          printf("\nInput::");
          scanf("%d",&n);
          for(i=1;i<n;i++)
          {
                    printf("\nNumber is:%d and cube of %d is ::%d",i,i,(i*i*i));
          }
          return 0;
}