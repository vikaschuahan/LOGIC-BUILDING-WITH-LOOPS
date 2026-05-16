// 13. Check whether the given number is a palindrome.

#include <stdio.h>

int main()
{
    int n, r, c, s = 0

                 printf("Enter Number to chek:");
    scanf("%d", &n);
    c = n;
    while (n > 0)
    {
        r = n % 10;
        s = r + (s * 10);

        n = n / 10;
    }
    if (c == s)
        printf("Palinder   number");
    else
        printf("Not");

    return 0;
}