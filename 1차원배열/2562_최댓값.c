#include <stdio.h>
int main()
{
    int A = 0;
    int index = 0;
    int array[9] = {0};
    for (int i = 0; i < 9; i++)
    {
        scanf("%d", &array[i]);
        if (A < array[i])
        {
            A = array[i];
            index = i + 1;
        }
    }
    printf("%d\n%d", A, index);
    return 0;
}