// Write a program in C to display the pattern like right angle triangle with a number.

// 1
// 12
// 123
// 1234
#include<stdio.h>

int main(){
          int i,r,n;
          printf("\n Input::");



          scanf("%d",&n);
          for(i=1;i<=n;i++)
          {
                    for(r=1;r<=i;r++)
                    {
                              printf("%d",r);
                    }
                    printf("\n");
          }
          return 0;
}