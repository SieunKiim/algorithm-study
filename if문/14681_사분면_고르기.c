#include <stdio.h>
int main()
{
    int A, B;
    scanf("%d", &A);
    scanf("%d", &B);
    if (A * B > 0)
    {
        if (A > 0)
        {
            printf("1");
        }
        else
        {
            printf("3");
        }
    }
    else
    {
        if (A > 0)
        {
            printf("4");
        }
        else
        {
            printf("2");
        }
    }
    return 0;
}