// . Write a program in C to make such a pattern like right angle triangle with a number 
// which will repeat a number in a row. 

// The pattern like :

//  1
//  22
//  333
//  4444
#include<stdio.h>

int main(){
          int i,j,n;
          printf("Input ::");
          scanf("%d",&n);
          for(i=0;i<n;i++)
          {
                    for(j=0;j<i;j++)
                    {
                              printf("%d",i);
                    }
                    printf("\n");
          }


          
          return 0;
}