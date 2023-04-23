#include <stdio.h>
int main()
{
    float N, tax=0.0;
    scanf("%f", &N);

    if(N > 4500.00)
    {
        tax += 350;
        N = N - 4500.00;
        tax = tax + ((N*28)/100);
        printf("R$ %.2f\n",tax);
    }
    else if(N > 3000.00)
    {
        tax += 80;
        N = N - 3000.00;
        tax = tax + ((N*18)/100);
        printf("R$ %.2f\n",tax);
    }
    else if(N > 2000.00)
    {
        N = N - 2000.00;
        tax = (N*8)/100;
        printf("R$ %.2f\n",tax);
    }
    else
    {
        printf("Isento\n");
    }

    return 0;
}
