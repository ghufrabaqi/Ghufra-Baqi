#include <stdio.h>
  
int main()  
{  
    int num;  
  
    printf("Enter a positive or negative number\n");  
    scanf("%d", &num);  
    if(num>=0)
    {
    printf("Absolute Value of number is %d\n",num);  
    }
    else
    {
        printf("Absolute Value of number is %d\n",-num);
    }
    return 0;  
}  
