#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
    int N, A_min, A_max;
    while(scanf("%d %d %d",&N, &A_min, &A_max)!=EOF){

        int A;
        int i, count=0;
        for(i=0; i<N; i++){
            scanf("%d", &A);
            if(A<=A_max && A>=A_min) count++;

        }

        printf("%d\n",count);
    }
    return 0;
}



