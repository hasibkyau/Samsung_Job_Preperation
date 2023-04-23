#include <stdio.h>

int main(){
    int x,y,t;
    scanf("%d %d", &x, &y);

    if(x>=y){
        t = (24-x)+y;
    }
    else{
        t = (y-x);
    }
    printf("O JOGO DUROU %d HORA(S)\n",t);
    return 0;
}
