#include <stdio.h>

int main(){
    int N;
    scanf("%d",&N);
    for(int i=0; i<N; i++){
        int Q;
        scanf("%d", &Q);
        printf("resposta %d: %d\n",i+1, Q);
    }
    return 0;
}
