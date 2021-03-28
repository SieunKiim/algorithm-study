#include <stdio.h>
int main()
{
    int A;
    scanf("%d", &A);
    int count = 0;
    int og = A;
    while (1)
    {
        int ten = A / 10;
        int one = A % 10;
        int temp = ten + one;
        ten = one;
        one = temp % 10;
        A = ten * 10 + one;
        if (A == og)
        {
            break;
        }
        count++;
    }
    printf("%d", count + 1);
    return 0;
}