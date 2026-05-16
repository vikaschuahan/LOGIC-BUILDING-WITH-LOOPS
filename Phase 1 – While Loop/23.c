// 23. Print all numbers between a and b that are divisible by 7.
#include <stdio.h>

int main()
{
    int n;
    printf("Enter NUmber to Chek divisbilty:");
    scanf("%d", &n);

    while (n > 0)
    {
        if (n % 7 == 0)
            printf("\nDivisible By 7");

        else
            printf("Not");
        break;
    }

    return 0;
}