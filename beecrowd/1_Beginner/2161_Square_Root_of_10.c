#include <stdio.h>
#include <string.h>

int main(){
    int N;
    scanf("%d", &N);

    double sum=6.0;

    for(int i=1; i<N; i++){
        sum = 6 + (1.0/sum);
    }

    if(N==0) printf("3.0000000000\n");
    else printf("%.10lf\n", 3.0 + (1/sum));

    return 0;
}
