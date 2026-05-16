// 15. Check whether the given number is an Armstrong number.
#include <stdio.h>

int main()
{
    int n, r, c, arm = 0;

    printf("ENter NUmber:");
    scanf("%d", &n);
    c = n;

    while (n > 0)
    {
        r = n % 10;
        arm = (r * r * r) + arm;

        n = n / 10;
    }

    if (c == arm)
        printf("Armstong Number");
    else
        printf("Not");

    return 0;
}