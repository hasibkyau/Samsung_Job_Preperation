#include <stdio.h>
#include <string.h>
#include <math.h>

int FindCost(int Start, int End, int G)
{
    int P=(End-Start)+1;
    int cost=1;
    int sum=0;

    if(G < Start && G < End) cost = 1;
    if(Start>G && End>G) cost=(Start-G)+1;
    if(End < G && Start < G) cost=(G-End) + 1;

    for(int i=1; i<=P; i++)
    {
            sum=sum+ cost;
            if(i%2 != 0 || (G-cost)+1 < Start || (G+cost)-1>End) cost++; //inserting as pair
    }
    return sum;
}

int main()
{

    int spots=10, P1, P2, P3, G1, G2, G3, min, MinFlag=1;
    scanf("%d",&spots);
    scanf("%d %d %d", &G1, &G2, &G3);
    scanf("%d %d %d", &P1, &P2, &P3);


    int arr[spots], c=1;



    int G1Avail=((spots-(P2+P3))-P1)+1;
    for(int i=1; i<=G1Avail; i++)
    {
        int G1Start=i, G1End=i+P1-1;

        int G2Avail=((spots-(G1End+P3))-P2)+1;
        for(int j=1; j<=G2Avail; j++)
        {
            int G2Start=G1End+j;
            int G2End=G2Start+P2-1;

            int G3Avail=((spots-G2End)-P3)+1;
            for(int k=1; k<=G3Avail; k++)
            {
                int G3Start=G2End+k;
                int G3End=G3Start+P3-1;

                int G1Cost=FindCost(G1Start, G1End, G1);
                int G2Cost=FindCost(G2Start, G2End, G2);
                int G3Cost=FindCost(G3Start, G3End, G3);
                int TotalCost=G1Cost+G2Cost+G3Cost;

                if(MinFlag) min = TotalCost; MinFlag=0;
                if(TotalCost<min) min=TotalCost;

                c++;
            }
        }

    }

    printf("%d\n", min);

    return 0;
}
