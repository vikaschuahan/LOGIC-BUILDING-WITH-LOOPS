// 3. Print all even numbers between 1 and 100.
#include <stdio.h>

int main()
{
    int x = 1;
    while (x <= 100)
    {
        printf("\n%d", x);
        x = x + 2;
    }

    return 0;
}