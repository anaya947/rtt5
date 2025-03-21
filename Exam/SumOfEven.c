#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("enter the number:");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sum = sum + i;
        }
        else
            continue;
    }
    printf("Sum of all even numbers are :  %d", sum);
}

// #include <stdio.h>
// int main()
// {
//     int n, sum = 0;
//     printf("enter the number:");
//     scanf("%d", &n);
//     for (int i = 2; i <= n; i=i+2)
//     {
        
//             sum = sum + i;

//     }
//     printf("Sum of all even numbers are :  %d", sum);
// }

