#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
    int N;
    while(scanf("%d",&N)!=EOF){
        double vote=0;
        for(int i=0; i<N; i++){
            double temp;
            scanf("%lf",&temp);
            vote=vote+temp;
        }
//        printf("Vote=%lf\n",vote);

        double res = (double)vote/N;
        double x=2.0/3.0;
//        printf("x=%lf\n",x);


        if(res >= x) printf("impeachment\n");
        else printf("acusacao arquivada\n");
    }
    return 0;
}
