#include <stdio.h>
int main()
{
    int A, B;
    scanf("%d", &A);
    scanf("%d", &B);
    int one, ten, hund;
    one = B%10;
    ten = (B/10)%10;
    hund = B/100;
    
    printf("%d\n", A*one);
    printf("%d\n", A*ten);
    printf("%d\n", A*hund);
    printf("%d\n", A*B);
    return 0;
}