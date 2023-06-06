#include <stdio.h>
int count=0, N, A[100];


int search(){
    int flag[100]={0, };

    for(int i=0; i<N; i++){
        count++;
        if(1==flag[A[i]])
            return 1;// duplicated
        flag[i] = 1;
    }

    return 0; //No duplicate
}

int main(){
    scanf("%d", &N);
    for(int i=0; i<N; i++){
        scanf("%d", &A[i]);
    }

    int duplicate = search();
    if(duplicate) printf("Not Unique\n");
    else printf("Unique\n");
    printf("%d\n", count);
    return 0;
}
