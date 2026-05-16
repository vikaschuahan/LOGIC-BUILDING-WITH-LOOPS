// 25. Find and print the sum of all factors of the given number.

#include <stdio.h>

int main()
{
    int n, i = 1, sum = 0;

    printf("Enter Number:");
    scanf("%d", &n);

    while (i <= n)
    {
        if (n % i == 0)
        {
            sum = i + sum;
        }
        i++;
    }
    printf("\nThe sum of All factor %d", sum);

    return 0;
}