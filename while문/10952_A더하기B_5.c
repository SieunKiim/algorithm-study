#include <stdio.h>
int main()
{
    int stat = 1;
    while(stat == 1){
        int B, A;
        scanf("%d %d", &A, &B);
        if(A+B ==0){
            stat = 0;
            break;
        }
        printf("%d\n",A+B);
    }
    return 0;
}