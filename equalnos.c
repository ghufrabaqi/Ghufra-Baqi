#include <stdio.h>
void main()
{
    int M, N;
 
    printf("Enter the values for M and N\n");
    scanf("%d %d", &M, &N);
    if (M == N)
        printf("M and N are equal\n");
    else
        printf("M and N are not equal\n");
}