#include <stdio.h>
  
int main()
{
    int x,y,sum;
    float average;
  
    printf("Enter first number :");
    scanf("%d",&x);
    printf("Enter second number :");
    scanf("%d",&y);
  
    sum=x+y;
    average= (float)(x+y)/2;
  
    printf("\nSum of %d and %d is = %d",x,y,sum);
    printf("\nAverage of %d and %d is = %f",x,y,average);
  
    return 0;
}