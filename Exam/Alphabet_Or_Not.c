#include <stdio.h>
int main()
{
    char ch;
    printf("enter the character :");
    scanf("%c", &ch);
    if ((ch >= 'A') && (ch <= 'Z'))
    {
        printf("The character is an Alphabet ");
    }
    else if ((ch >= 'a') && (ch<= 'z'))
    {
        printf("The character is an Alphabet ");
    }
    else
        printf("The character is not an Alphabet ");
}