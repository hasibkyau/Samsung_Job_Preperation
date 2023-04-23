#include <stdio.h>
int main(){
    float x[6];
    int c=0;
    for(int i=0; i<6; i++){
        scanf("%f", &x[i]);
    }

    for(int i=0; i<6; i++){
        if(x[i]>0){
            c++;
        }
    }
    printf("%d valores positivos\n", c);
    return 0;
}
