#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int P,N, pipe_height=0, win=1;
    scanf("%d %d %d", &P, &N, &pipe_height);

    int temp=pipe_height;

    for(int i=1; i<N; i++){
        scanf("%d",&pipe_height);

        if(abs(temp - pipe_height) > P){
            win=0;
            printf("GAME OVER\n");
            break;
        }
        else{
            temp=pipe_height;
        }
    }
    if(win==1){
       printf("YOU WIN\n");
       }
    return 0;
}

