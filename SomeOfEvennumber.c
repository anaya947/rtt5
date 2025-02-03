#include <stdio.h>
int main()
{
    int kert[5]; // decleration of an int array with size 5
    int coutan =0;
    printf("enter array valuse:");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&kert[i]);
    }
    for ( int i=0;i<5;i++)
    {
        if (kert[i]%2==0)
        {
            coutan++;
        }
        else
        continue;
        
    }
    printf("total even number is:%d",coutan);
}