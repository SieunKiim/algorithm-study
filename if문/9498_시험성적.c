#include <stdio.h>
int main()
{
    int A;
    scanf("%d", &A);
    if (90 <= A)
    {
        printf("A");
    }
    else if (80 <= A)
    {
        printf("B");
    }
    else if (70 <= A)
    {
        printf("C");
    }
    else if (60 <= A)
    {
        printf("D");
    }
    else
    {
        printf("F");
    }
    return 0;
}