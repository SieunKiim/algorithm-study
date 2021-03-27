#include <stdio.h>
int main()
{
    int A;
    int N;
    scanf("%d %d", &N, &A);
    int array[10000] = {0};
    for (int i = 0; i < N; i++)
    {
        int k;
        scanf("%d", &k);
        if (k < A)
        {
            array[i] = k;
        }
        else
        {
            array[i] = 0;
        }
    }
    //printf("-------------\n");
    for (int i = 0; i < N; i++)
    {
        if (array[i] > 0)
        {
            printf("%d ", array[i]);
        }
    }
    return 0;
}