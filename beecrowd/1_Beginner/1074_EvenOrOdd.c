#include <stdio.h>

int main(){
    long int N;
    scanf("%d", &N);

    long int X[N];

    for(int i=0; i<N; i++){
        scanf("%d", &X[i]);
    }

    for(int i=0; i<N; i++){

        if(abs(X[i]) % 2 == 0){
                if(X[i] > 0){
                    printf("EVEN POSITIVE\n");
                }
                else if(X[i] < 0){
                    printf("EVEN NEGATIVE\n");
                }
                else if(X[i] == 0){
                    printf("NULL\n");
                }

        }
        else if(abs(X[i]) % 2 == 1){
                if(X[i] > 0){
                    printf("ODD POSITIVE\n");
                }
                else if(X[i] < 0){
                    printf("ODD NEGATIVE\n");
                }
                else if(X[i] == 0){
                    printf("NULL\n");
                }
        }
        //printf("%d\n", X[i]);
    }

    return 0;
}
