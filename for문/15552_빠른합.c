#include <stdio.h>
int main()
{
    int A;
    scanf("%d", &A);
    //int story[A];
    for (int i = 0; i < A; i++)
    {
        int B, C;
        scanf("%d %d", &B, &C);
        //story[i] = B + C;
        printf("%d\n", B + C);
    }
    return 0;
}