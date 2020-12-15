#include <stdio.h>
#include <math.h>
int sumofdigits(int num)
{
    if(num == 0)
        return 0;
    return (num%10+sumofdigits(num/10));
}
void main()
{
    int num,sum;
    printf("Enter a number: ");
    scanf("%d", &num);
    sum=sumofdigits(num);
    printf("%d is sum of digits of %d",sum,num);
}