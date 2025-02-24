#include <stdio.h>
int main()
{
    int m;
    printf("Enter number: ");
    scanf("%d", &m); 
    if( m%2==0)

    {
        printf("The number is even:");
    }
    else
    {
        printf(" The number is odd:");
    }
    return 0;
}