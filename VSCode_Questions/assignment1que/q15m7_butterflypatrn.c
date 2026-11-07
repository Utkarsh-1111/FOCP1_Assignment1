
#include <stdio.h>

int main()
{
    int n, i, j, k, stars;

    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        if(i <= n / 2 + 1)
            stars = i;
        else
            stars = n - i + 1;

        for(j = 1; j <= stars; j++)
        {
            printf("*");
        }

        for(k = 1; k <= 2 * (n - stars); k++)
        {
            printf(" ");
        }

        for(j = 1; j <= stars; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
