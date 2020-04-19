#include <stdio.h>
int main ()
{
    //Write a C program to check whether a number is even or odd.
    int a;
    scanf("%d", &a);
    if (a%2==0)
    {
        printf("%d is even number", a);
    }
    else
    {
        printf ("%d is odd number", a);
    }

    return 0;
}
