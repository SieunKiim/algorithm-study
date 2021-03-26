#include <stdio.h>
int main()
{
    int A;
    scanf("%d", &A);
    if (A % 400 == 0)
    {
        printf("1");
    }
    else
    {
        if (A % 100 != 0)
        {
            if (A % 4 == 0)
            {
                printf("1");
                return 0;
            }
        }
        printf("0");
    }
    return 0;
}