#include <stdio.h>
#include <math.h>

int main(){
    long int x,y, temp, sum=0;
    scanf("%d %d", &x, &y);


    while(1){
        x = x - 1;
        temp = abs(x);
        if((temp)% 2 == 1 && x != y){
            sum+=x;
        }
        if(x==y){
            break;
        }

    }
    printf("%d\n",sum);
    return 0;
}
