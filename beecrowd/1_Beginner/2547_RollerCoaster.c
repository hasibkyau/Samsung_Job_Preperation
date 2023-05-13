#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
    int N;
    while(scanf("%d",&N) != EOF){

        int T, D;
        double avg=0;

        for(int i=1; i<=N; i++){
            scanf("%d %d", &T, &D);
            double temp= (double)D/T;
            if(temp>avg) printf("%d\n",i), avg=temp;

        }
    }
    return 0;
}


