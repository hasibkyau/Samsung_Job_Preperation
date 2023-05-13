#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
    int N;
    while(scanf("%d",&N)!=EOF){

        int res=1;
        int i;
        for(i=0; i<N; i++){
            if(res==N) break;
            else res = res*2;

        }

        printf("%d\n",i);
    }
    return 0;
}

