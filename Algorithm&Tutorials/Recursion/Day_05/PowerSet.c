#include <stdio.h>

int N, A[100], set[100], count=0;

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
    printf("{");
    int f=1;
    for(int i=0; i<N; i++) {
            if(A[i]==1){
                if(f){
                    printf("%d",set[i]);
                    f=0;
                }
                else{
                    printf(",%d",set[i]);
                }
            }
    }
    printf("}\n");
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
    scanf("%d", &N);
    int i;
    for(i=0; i<N; i++){
        scanf("%d",&set[i]);
    }


    solve(0);
    return 0;
}







