#include <stdio.h>
int main()
{
    int stat = 0;
    int B, A;
    while (scanf("%d %d", &A, &B) != EOF)
    {
        printf("%d\n", A + B);
    }
    return 0;
}