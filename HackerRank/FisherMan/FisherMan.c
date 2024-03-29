#include <stdio.h>
#include <string.h>
#include <math.h>

int FindCost(int Start, int End, int G)
{
    int P=(End-Start)+1; //Totall person needed to insert
    int cost=1; //initial cost 0;
    int sum=0;

    if(G < Start && G < End) cost = 1; //If the fist person enter in the spots near to the Gate
    if(Start>G && End>G) cost=(Start-G)+1; // If the spot is at right side of the gate
    if(End < G && Start < G) cost=(G-End) + 1;// if the spot ends before the gate

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


    int c=1;//Possible of a specific gate
    int TotalCombination = 0; // Total possible way of combination


//G1Avail = Number of combination at fist gate
//G1Avail = (Free spots - Number of persons at first gate) + 1;
//Free spots = Total spots - (people waiting at gate 1 + gate 2)

    int G1Avail=((spots-(P2+P3))-P1)+1;
    for(int i=1; i<=G1Avail; i++)
    {
        //G1Start = The fist leftmost spot occupied my fishermen through Gate 1.
        //G1End = The RightMost spot occupied by the fishermen through Gate 1.
        //G1End = (The first spot + total fisherman) - 1;
        int G1Start=i, G1End=i+P1-1;
        int G1Cost=FindCost(G1Start, G1End, G1);
        if(MinFlag==0 & G1Cost>min) break;

        //G1Avail = Number of combination at second gate
        int G2Avail=((spots-(G1End+P3))-P2)+1;
        for(int j=1; j<=G2Avail; j++)
        {
            int G2Start=G1End+j, G2End=G2Start+P2-1;
            int G2Cost=FindCost(G2Start, G2End, G2);
            if(MinFlag==0 & G1Cost+G2Cost>min) break;

            //G1Avail = Number of combination at third gate
            int G3Avail=((spots-G2End)-P3)+1;
            for(int k=1; k<=G3Avail; k++)
            {

                int G3Start=G2End+k, G3End=G3Start+P3-1;
                int G3Cost=FindCost(G3Start, G3End, G3);

                int TotalCost=G1Cost+G2Cost+G3Cost;

                if(MinFlag) min = TotalCost; MinFlag=0;
                if(TotalCost>min) break;

                if(TotalCost<min) min=TotalCost;

                c++;
                TotalCombination++;
            }
        }

    }

    printf("%d\n", min);
    return 0;
}
