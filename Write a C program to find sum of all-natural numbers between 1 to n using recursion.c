#include <stdio.h>
int Sum(int n)
{
    if(n==0)
        return 0;
    else
        return n+Sum(n-1);
}
void main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    printf("Sum of all natural numbers from 1 to %d is: %d",n,Sum(n));
}
