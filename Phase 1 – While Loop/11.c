// 11. Count and print the total number of digits in a given number.

#include <stdio.h>

int main()
{

    int n, r, i = 1, sum = 0;
    printf("Enter Number:");
    scanf("%d", &n);

    while (n > 0)
    {
        r = n % 10;

        sum = sum + r;

        n = n / 10;
        i++;
    }
    printf("\n%d", sum);
    printf("\n%d", i);
    return 0;
}