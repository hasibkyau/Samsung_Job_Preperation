#include <stdio.h>
#include <stdint.h>  // for uint64_t data type

int main()
{
    int N, min, pos=0;
    scanf("%d", &N);

    int X[N];

    for(int i=0; i<N; i++){
        int temp;
        scanf("%d", &temp);
        if(i==0){
            min = temp;
        }

        if(temp < min){
            min = temp;
            pos = i;
        }
    }
    printf("Menor valor: %d\n",min);
    printf("Posicao: %d\n",pos);
    return 0;
}




