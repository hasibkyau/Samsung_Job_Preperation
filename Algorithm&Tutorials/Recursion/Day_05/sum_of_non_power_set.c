#include <stdio.h>
#include <math.h>

int N, A[100], set[100], count=0, min=500;

int check(int i, int j){
    int k;
    for(k=0; k<i; k++){
        if(A[k]==j){
            return 1;
        }
    }
    return 0;
}



void print(){
    int sumA=0, sumB=0;
    for(int i=0; i<N; i++) {
            if(A[i]==1){
                sumA=sumA+set[i];
            }
            else{
                sumB=sumB+set[i];
            }
    }
    int diff = abs(sumA-sumB);
//    printf("%d - %d = %d\n",sumA, sumB, diff);
    if(min> diff){
        min=diff;
    }
}

void solve(int i){
    if(i==N){
        print();
        return;
    }
    A[i]=0;
    solve(i+1);
    A[i]=1;
    solve(i+1);
//    for(int j=0; j<N; j++) if(0==check(i,j)){
//        A[i] = j;
//        solve(i+1);
//    }
}


int main(){
    int T;
    scanf("%d", &T);

    for(int j=0; j<T; j++){
            scanf("%d", &N);
    int i;
    for(i=0; i<N; i++){
        scanf("%d",&set[i]);
    }


    solve(0);
    printf("%d\n", min);

    min=500;
    }

    return 0;
}







