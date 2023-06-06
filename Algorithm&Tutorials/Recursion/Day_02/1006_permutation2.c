#include <stdio.h>

int N, A[100], count=0;
void print()
{

    for(int i=0; i<N; i++)
    {
        for(int j=i+1; j<N; j++)
        {
            count++;
            if(A[i] == A[j])
            {
                return;
            }
        }
    }


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





