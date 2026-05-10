// 9. Calculate and print the factorial of a given number.
#include <stdio.h>

int main()
{
    int i = 1, j, fact = 1;

    printf("Enter NUmber: ");
    scanf("%d", &j);

    while (i <= j)
    {
        fact = fact * i;
        i++;
    }

    printf("\n%d", fact);
    return 0;
}