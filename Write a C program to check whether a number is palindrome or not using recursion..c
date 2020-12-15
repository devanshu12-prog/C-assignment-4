#include <stdio.h>
#include <math.h>
int reverse(int num)
{
    int digit=(int)log10(num);
    if(num == 0)
        return 0;
    return ((num%10*pow(10,digit))+reverse(num/10));
}
void main()
{
    int num, rev;
    printf("Enter a number: ");
    scanf("%d", &num);
    rev=reverse(num);
    if (num==rev)
        printf("%d is palindrome",num);
    else
        printf("%d is not palindrome",num);
}
