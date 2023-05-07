#include <stdio.h>
#include <math.h>

int main()
{
    int N, CurrentTime=2015;
    scanf("%d", &N);

    for(int i=0; i<N; i++){
        int T;
        scanf("%d",&T);

        T = (CurrentTime-T);

        if(T > 0){
            printf("%d D.C.\n",T);
        }
        else{
            printf("%d A.C.\n",abs(T)+1);
        }
    }

    return 0;
}



