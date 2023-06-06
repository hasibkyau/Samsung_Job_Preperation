#include <stdio.h>

int N, A[100], count=0;

int search()
{
    int flag[100]= {0, };

    for(int i=0; i<N; i++)
    {
        count++;
        if(1==flag[A[i]]) return 1;// duplicated
        flag[i] = 1;
    }

    return 0; //No duplicate
}


void print()
{
    int n=N-1;
    int sum=(n*(n+1))/2;
    int flag[100]= {0, };

    for(int i=0; i<N; i++)
    {
        count++;
        if(1==flag[A[i]])
            return;
        flag[i] = 1;
    }
    //175392

    for(int i=0; i<N; i++)
    {
        printf("%d",A[i]);
    }
    printf("\n");

}

void solve(int i)
{
    if(i==N)
    {
        print();
        return;
    }
    for(int j=0; j<N; j++)
    {
        A[i] = j;
        solve(i+1);
    }
}


int main()
{
//    freopen("output2.txt", "w", stdout);
    scanf("%d", &N);
    solve(0);
    printf("Count = %d\n", count);
    return 0;
}






