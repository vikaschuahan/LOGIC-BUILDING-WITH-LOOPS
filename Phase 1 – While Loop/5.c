// 5. Print the multiplication table of a given number from n x 1 to n x 10.
#include <stdio.h>

int main()
{
    int i = 1, j;

    printf("Enter Number to get Table :");
    scanf("%d", &j);

    printf("\n");

    while (i <= 10)
    {
        printf("\n%d x %d\t=%d", j, i, j * i);
        i++;
    }

    return 0;
}