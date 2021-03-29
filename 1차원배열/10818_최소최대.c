#include <stdio.h>
int main()
{
    int N;
    int array[] = {0};
    scanf("%d", &N);
    int tempB = -1000001;
    int tempS = 1000001;

    for (int i = 0; i < N; i++)
    {
        int newNum = 0;
        scanf("%d", &newNum);
        if (tempB < newNum)
        {
            tempB = newNum;
        }
        if (tempS > newNum)
        {
            tempS = newNum;
        }
    }
    printf("%d %d", tempS, tempB);
    return 0;
}