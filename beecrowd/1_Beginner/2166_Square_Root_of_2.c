#include <stdio.h>
#include <string.h>

int main(){
    int N;
    scanf("%d", &N);

    double sum=2.0;

    for(int i=1; i<N; i++){
        sum = 2 + (1.0/sum);
    }

    if(N==0) printf("1.0000000000\n");
    else printf("%.10lf\n", 1.0 + (1/sum));

    return 0;
}
