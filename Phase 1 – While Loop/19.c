// 19. Print the Fibonacci series up to n terms.

#include <stdio.h>

int main()
{
    int a = 0, b = 1, n, i = 1, c;

    printf("ENter NUmber:");
    scanf("%d", &n);

    while (i <= n)
    {
        printf("\n%d", a);

        c = a + b;
        a = b;
        b = c;
        i++;
    }

    return 0;
}