#include <stdio.h>
int main()
{
    int A, B;
    scanf("%d %d", &A, &B);
    if ((B - 45) < 0)
    {
        B = 60 + (B - 45);
        if (A - 1 < 0)
        {
            A = 23;
            printf("%d %d", A, B);
        }
        else
        {
            A = A - 1;
            printf("%d %d", A, B);
        }
    }
    else
    {
        B = B - 45;

        printf("%d %d", A, B);
    }
    return 0;
}