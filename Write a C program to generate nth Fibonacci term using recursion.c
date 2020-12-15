#include <stdio.h>
#include <math.h>
int fibonacci(int n)
{
    if(n<3)
        return n-1;
    return (fibonacci(n-1)+fibonacci(n-2));
}
void main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Term at %d in fibonacci series is %d",n,fibonacci(n));
}