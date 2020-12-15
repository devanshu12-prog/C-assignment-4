#include <stdio.h>
int sum(int num,int n) 
{
    if(num>n)
        return 0;
    else
        return (num+sum(num+2,n));
}
void main()
{
    int num=1,n;
    printf("Enter upper limit: ");
    scanf("%d", &n);
    printf("Sum of odd numbers upto %d = %d\n",n,sum(num,n));
    printf("Sum of even numbers upto %d = %d",n,sum(num+1,n));
}
