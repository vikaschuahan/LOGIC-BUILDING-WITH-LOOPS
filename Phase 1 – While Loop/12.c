// 12. Reverse the given number and print the reversed value.

#include <stdio.h>

int main()
{
    ```` int y = 0, num;
    printf("Enter Number:");
    scanf("%d", &num);

    while (num)
    {
        y = y * 10 + num % 10;
        num = num / 10;
    }

    printf("\n%d", y);

    return 0;
}