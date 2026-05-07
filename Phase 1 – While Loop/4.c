// 4. Print all odd numbers between 1 and 100.
#include <stdio.h>

int main()
{
    int x = 0;
    while (x <= 100)
    {
        x = x + 2;
        printf("\n%d", x);
    }
    return 0;
}