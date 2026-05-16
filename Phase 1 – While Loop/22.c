// 22. Print the cube of each number from 1 to n.
#include <stdio.h>

int main()
{
    int n, i = 1;

    printf("Enter Number:");
    scanf("%d", &n);

    while (i <= n)
    {
        printf("\n%d The Cube of  %d", i, i * i * i);
        i++;
    }
    return 0;
}
