#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the number:");
    scanf("%d%d%d",&a,&b,&c);
    if (a>b && a>c)
    {
        printf("the great number is:%d",a);

    }
    else if (b>a && b>c)
    {
       printf("the great number is:%d",b); 
    }
    else 
    printf("the great number is:%d",c);

    
    
}