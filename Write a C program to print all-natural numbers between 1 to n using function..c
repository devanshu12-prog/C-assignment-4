#include <stdio.h>
void Natural(int num, int n)
{
    if(num>n)
        return;
    printf("%d\n",num);
    Natural(num+1,n);
}
void main()
{
    int n,num=1;
    printf("Enter number: ");
    scanf("%d", &n);
    printf("All natural numbers from 1 to %d are: \n",n);
    Natural(num,n);
}

