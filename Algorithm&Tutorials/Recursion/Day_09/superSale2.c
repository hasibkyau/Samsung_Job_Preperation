#include <stdio.h>

#define SIZE_N 1001
#define SIZE_MW 31

int T, N, P[1001], W[1001], G, MW[1001], DP[SIZE_N][SIZE_MW], A[1001], max=0, count=0, cap=0;

void initDP(){
    for(int i=0; i<SIZE_N; i++){
        for(int j=0; j<SIZE_MW; j++){
            DP[i][j]=-1;
        }
    }
}

void readCase()
{
    scanf("%d", &N); // Number of Objects
    for(int i=0; i<N; i++) scanf("%d %d", &P[i], &W[i]); // Price and cap of each objects
    scanf("%d",&G); // Number of family number
    for(int i=0; i<G; i++) scanf("%d",&MW[i]); // capacity of each family member
}

void printCase(int T)
{
    printf("Case:%d\n",T);
    printf("Number of objects = %d\n", N);
    for(int i=0; i<N; i++) printf("Object%d - price = %d cap = %d\n",i+1, P[i], W[i]);
    printf("Family Members = %d\n",G);
    for(int i=0; i<G; i++) printf("Person%d - capacity = %d\n",i+1, MW[i]);
    printf("\n");
}

void solve(int i, int cart, int price){
count++;
    if(cart>cap){
        return;
    }
//    printf("Capacity:%d Cart:%d\n", cap, cart);

    if(i==N){
        if(price>=max) max=price;
        return;
    }

    solve(i+1,cart,price);
    solve(i+1, cart+W[i], price+P[i]);
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    scanf("%d", &T);
    while(T--)
    {
        readCase();
        int res=0;
        for(int i=0; i<G; i++){
          initDP();
          cap=MW[i];
          solve(0,0,0);
//          printf("Person %d = %d Tk\n",i+1, max);
          res+=max;
          max=0;
        }
        printf("count = %d\n",count);
        printf("%d\n",res);

    }
}

//2820
//0.754



