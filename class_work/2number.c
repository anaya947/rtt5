#include<stdio.h>
int main()
{
    int num1,num2;
    printf("enter the number:");
    scanf("%d%d",&num1,&num2);
    if (num1>num2)
    {
       printf("the maximum number is:%d",num1);

    }
    if (num2>num1)
    {
        printf("the maximum number is:%d",num2);

    }
    if (num1==num2)
    {
        printf("the number is equal:%d");

    }
    return 0;
    
    
    

}