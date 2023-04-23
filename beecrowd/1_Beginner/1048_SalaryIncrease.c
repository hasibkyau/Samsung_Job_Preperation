#include <stdio.h>

int main()
{
    float s, new_salary, money_earned, percentage;
    scanf("%f", &s);

    if(s >0 && s<=400.00){
        percentage=15;
    }
    else if(s>=400.01 && s<=800.00){
        percentage=12;
    }
    else if(s>=800.01 && s<=1200.00){
        percentage=10;
    }
    else if(s>= 1200.01 && s<=2000.00){
        percentage=7;
    }
    else if(s>2000.00){
        percentage=4;
    }

    money_earned= (s*percentage)/100;
    new_salary = s+money_earned;

    printf("Novo salario: %.2f\n", new_salary);
    printf("Reajuste ganho: %.2f\n", money_earned);
    printf("Em percentual: %.0f %%\n", percentage);

    return 0;
}

