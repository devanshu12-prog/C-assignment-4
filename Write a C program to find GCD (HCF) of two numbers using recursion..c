#include <stdio.h>
int hcf(int a, int b)
{
    if(b==0)
        return a;
    else
        return hcf(b,a%b); 
}
void main()
{
    int num1,num2;
    printf("Enter two numbers: ");
    scanf("%d %d",&num1,&num2);
    printf("HCF of %d and %d is %d",num1,num2,hcf(num1,num2));
}

