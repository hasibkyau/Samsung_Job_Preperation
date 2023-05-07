#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    while(1)
    {
        int price, payment, change;
        scanf("%d %d", &price, &payment);
        if(price==0 && payment==0){
            break;
        }
        change=payment-price;

        for(int i=0; i<2; i++){
            if(change>=100) change=change-100;
            else if(change>=50) change=change-50;
            else if(change>=20) change=change-20;
            else if(change>=10) change=change-10;
            else if(change>=5) change=change-5;
            else if(change>=2) change=change-2;
            else(change=1);
        }
        if(change==0) printf("possible\n");
        else printf("impossible\n");
    }

    return 0;
}







