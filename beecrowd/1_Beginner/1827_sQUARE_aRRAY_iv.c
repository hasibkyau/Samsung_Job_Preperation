#include <stdio.h>

int main()
{
    int N;
//    scanf("%d", &N);

    while( scanf("%d", &N) !=EOF )
    {
        int i, j;
        int x=N/3;

        for(i=0; i<N; i++)
        {
            for(j =0; j<N; j++)
            {

                if((i >= x && i < N-x) && (j >=x && j< N-x))
                {
                    if(i==N/2 && j==N/2)
                    {
                        printf("%d",4);
                    }
                    else
                    {
                        printf("%d",1);
                    }
                }
                else
                {
                    if(i==j)
                    {
                        if(i==N/2)
                        {
                            printf("%d",4);
                        }
                        else
                        {
                            printf("%d",2);
                        }
                    }
                    else if(j == N-(i+1))
                    {
                        printf("%d",3);
                    }
                    else
                    {
                        printf("%d",0);
                    }
                }
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}

