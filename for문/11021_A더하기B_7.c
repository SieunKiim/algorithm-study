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
        printf("Case #%d: %d + %d = %d\n",i+1,B, C,B+C);
    }
//     for (int i = 0; i < A; i++)
//     {
//         printf("Case #%d: %d + %d = %d\n",i+1,B, C, story[i]);
//     }
    return 0;
}