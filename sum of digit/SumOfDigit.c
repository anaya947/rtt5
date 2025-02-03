#include <stdio.h>
int main()
{
    int n, sum = 0, z;
    printf("enter tha number :");
    scanf("%d", &n);
    while (n > 0)
    {
        z = n % 10;
        sum = sum + z;
        n = n / 10;
    }
    printf("the sum of digit is :%d", sum);
}