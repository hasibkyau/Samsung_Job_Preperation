#include <stdio.h>
#include <math.h>

int main()
{
    int N;
    scanf("%d",&N);

    int roll, res=0;
    double highest=0, score;


    for(int i=0; i<N; i++){
        scanf("%d %lf", &roll, &score);
        if(highest<score){
            highest=score;
            res=roll;
        }
    }

    if(highest<8.0){
        printf("Minimum note not reached\n");
    }
    else{
        printf("%d\n", res);
    }
    return 0;
}

