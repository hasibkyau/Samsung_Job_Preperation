#include <stdio.h>

int main()
{
    double product[5] = {4.00, 4.50, 5.00, 2.00, 1.50};

    int X, Y;
    scanf("%d %d", &X, &Y);
    printf("Total: R$ %.2lf\n", product[X-1]*Y);

    return 0;
}
