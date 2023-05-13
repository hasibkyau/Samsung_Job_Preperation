#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
    double H,P,res;
    scanf("%lf %lf", &H, &P);
    res=H/P;

    printf("%.2lf\n",res);

    return 0;
}
