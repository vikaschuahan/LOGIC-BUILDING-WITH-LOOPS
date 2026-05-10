// 7. Calculate the sum of all even numbers from 1 up to n.
#include <stdio.h>

int main()
{
    int i = 1, j, sum = 0;
    printf("ENter Number");
    scanf("%d", &j);

    while (i <= j)
    {
        sum = sum + i;
        i = i + 2;
    }
    printf("\n%d", sum);
    return 0;
}