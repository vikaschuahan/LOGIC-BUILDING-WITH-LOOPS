// 6. Calculate and print the sum of the first n natural numbers

#include <stdio.h>

int  main()
{
    int i=1,j,sum=0;

    printf("Enter Number:");
    scanf("%d",&j);

    while (i<=j)
    {
        sum=sum+i;
        i++;
    }
    printf("\n%d",sum);

    return 0;

}