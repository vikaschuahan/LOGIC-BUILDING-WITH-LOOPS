// 10. Find and print the product of all digits of a given number.
#include <stdio.h>

int main()
{

    int n, r, sum = 0;
    printf("Enter Number:");
    scanf("%d", &n);

    while (n > 0)
    {
        r = n % 10;

        sum = sum + r;

        n = n / 10;
    }
    printf("\n%d", sum);
    return 0;
}