// 21. Print the square of each number from 1 to n.

#include <stdio.h>

int main()
{
   int n, i = 1;

   printf("ENter Number:");
   scanf("%d", &n);

   while (i <= n)
      ;
   {
      printf("\n%d \t%d", i, n * n);
      i++;
   }

   return 0;
}