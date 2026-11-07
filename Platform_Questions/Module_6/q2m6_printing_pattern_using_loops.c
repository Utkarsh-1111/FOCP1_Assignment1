#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int size = 2 * n - 1;
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            int top = i, left = j;
            int bottom = size - 1 - i, right = size - 1 - j;
            int layer = top;
            if(bottom < layer) layer = bottom;
            if(left < layer) layer = left;
            if(right < layer) layer = right;
            printf("%d", n - layer);
            if(j < size - 1) printf(" ");
        }
        printf("\n");
    }
    return 0;
}
