#include <stdio.h>
int main()
{
    double numA;
    double numB;
    scanf("%lf %lf", &numA, &numB);
    printf("%.9lf", numA / numB);
    return 0;
}