#include <stdio.h>

int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        int i, j;

        int x1, y1;
        scanf("%d %d", &x1, &y1);
        int world[y1+1][x1+1];

        for(i=0; i<=x1; i++)for(j=0; j<=y1; j++)
                world[i][j]=0;

        int x2, y2;
        scanf("%d %d",&x2, &y2);
        int R[]= {x2,y2};

        int NB;
        scanf("%d",&NB);
        int Beepers[NB][2];

        int end[2];
        for(i=0; i<NB; i++)
        {
            int x,y;
            scanf("%d %d", &x, &y);
            world[x][y]=1;
            Beepers[i][0]=x;
            Beepers[i][1]=y;
        }


        int pos[]= {x2,y2};
        int minPath=0;

        while(pos[0] != Beepers[NB-1][0] && pos[1]!=Beepers[NB-1][1])
        {
//            printf("pos[0] = %d pos[1] = %d\n",pos[0],pos[1]);
//            printf("end[0] = %d end[1] = %d\n",end[0],end[1]);
            int min=100000;
            for(i=0; i<=x1; i++)for(j=0; j<=y1; j++)
                {
                    if(world[i][j]==1)
                    {
                        int cost = abs(i-R[0]) + abs(j-R[1]);
//                        printf("Cost = %d min = %d\n", cost, min);
                        if(min>cost)
                        {
                            printf("Cost = %d min = %d\n", cost, min);
                            min=cost;
                            pos[0]=i;
                            pos[1]=j;
                            printf("Cost = %d min = %d\n", cost, min);
                        }
                    }
                }
            minPath=minPath+min;
        }
        minPath=minPath+ abs(x1-x2) + abs(y1-y2);
        printf("%d",minPath);

    }
}
