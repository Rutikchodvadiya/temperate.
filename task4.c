#include <stdio.h>
main()
{
    long num;
    int count = 0;
    printf("Enter any number: ");
    scanf("%lld", &num);
    {
        count++;
        num /= 10;
    }
    while(num != 0);
    printf("Digits count = %d", count);
}

