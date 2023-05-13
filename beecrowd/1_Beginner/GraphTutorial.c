#include <stdio.h>

int main()
{
    int f;
    scanf("%d",&f);

    for(int x=0; x<f; x++)
    {

        int nodes, edges, time;
        scanf("%d %d %d", &nodes, &edges, &time);

        int N=time/10;
        int M=nodes;

//    double Table[N][M];
        double Table[50][50];
        double Division[50][50];


        for(int i=0; i<nodes; i++)
        {
            for(int j=0; j<edges; j++)
            {
                Table[i][j]=0;
                Division[i][j]=0;
            }
        }
        Table[0][0]=1;



        for(int i=0; i<edges; i++)
        {
            int u,v;
            double w;
            scanf("%d %d %lf", &u, &v, &w);
            Division[u-1][v-1]=w;
        }

        //Print Grid
        printf("Grid:\n");
        for(int i=0; i<nodes; i++)
        {
            printf("Node %d: ",i+1);
            for(int j=0; j<edges; j++)
            {
                printf("%.2lf ",Division[i][j]);
            }
            printf("\n");
        }



        for(int i=0; i<N; i++)
        {
            for(int j=0; j<M; j++)
            {
                if(Table[i][j]>0)
                {
                    for(int k=0; k<M; k++)
                    {
                        Table[i+1][k]+=Table[i][j]*Division[j][k];
                    }
                }
            }
        }

        //Print Table
        double max=0;
        int pos;
        printf("Table:\n");
        for(int i=0; i<=N; i++)
        {
            for(int j=0; j<=M; j++)
            {
                printf("%.3lf  ",Table[i][j]);
            }
            printf("\n");
        }


        for(int i=0; i<=M; i++)
        {
            if(Table[N][i]>max) max=Table[N][i], pos=i;
        }
        printf("Answer: %d %lf", pos+1, max);
    }

    return 0;
}

