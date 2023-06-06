#include <stdio.h>
#include <math.h>

int startX, startY, endX, endY, N, NB, X[101], Y[101], A[100], count=0, used[100]= {0,}, min;

void print()
{
    int cost=0;
    cost+=abs(startX-X[A[0]]) + abs(startY-Y[A[0]]);
//    printf("\n");
//    int temp=0;
    for(int i=1; i<N; i++)
    {
        cost+=abs(X[A[i]]-X[A[i-1]]) + abs(Y[A[i]]-Y[A[i-1]]);
    }

    cost += abs(endX-X[A[N-1]]) + abs(endY-Y[A[N-1]]);
//    printf("Cost: %d\n",temp);
    if(cost<min) min=cost;

}

void solve(int i)
{
    if(i==N)
    {
        print();
        return;
    }
    for(int j=0; j<N; j++) if(used[j]==0)
        {
            A[i] = j;
            used[j]=1;
            solve(i+1);
            used[j]=0;
        }
}


int main()
{
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    int T=1;
//    scanf("%d",&T);

    while(T<=10)
    {
        scanf("%d", &N);
        scanf("%d %d", &startX, &startY);//ofice
        scanf("%d %d", &endX, &endY);//home


        for(int i=0; i<N; i++)
        {
            scanf("%d %d", &X[i], &Y[i]);
        }
        min=1e9;
        solve(0);
        printf("# %d %d\n",T, min);
        T++;
    }
    return 0;
}







