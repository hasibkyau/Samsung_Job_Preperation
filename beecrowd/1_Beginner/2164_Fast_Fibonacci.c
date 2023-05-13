#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
    int n;
    scanf("%d", &n);

    double a = pow(((1+sqrt(5))/2),n);
    double b = pow(((1-sqrt(5))/2),n);

    double Fib=a-b;
    Fib = Fib/sqrt(5);
    printf("%.1lf\n", Fib);

    return 0;
}

