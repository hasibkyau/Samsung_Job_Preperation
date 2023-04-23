#include <stdio.h>
#include <string.h>
#include <stdbool.h>


int main()
{
    char Orange='O', Red='R', Blue='B', Green='G', White='W', Yellow='Y', Temporary='T';
    char cmp[18] = {'O','O','O','R','R','R','B','B','B','G','G','G','W','W','W','Y','Y','Y'};
    char T[3]={Temporary, Temporary, Temporary};


    char RB[18][3]=
    {
        Orange,Orange,Orange,
        Orange,Orange,Orange,
        Orange,Orange,Orange,

        Red,Red,Red,
        Red,Red,Red,
        Red,Red,Red,

        Blue,Blue,Blue,
        Blue,Blue,Blue,
        Blue,Blue,Blue,

        Green,Green,Green,
        Green,Green,Green,
        Green,Green,Green,

        White,White,White,
        White,White,White,
        White,White,White,

        Yellow,Yellow,Yellow,
        Yellow,Yellow,Yellow,
        Yellow,Yellow,Yellow,
    };


    void R_flip()
    {
        for(int i=0; i<3; i++)
        {
            T[i] = RB[6+i][2];
            RB[6+i][2] = RB[15+i][2];
            RB[15+i][2] = RB[9+i][2];
            RB[9+i][2] = RB[12+i][2];
            RB[12+i][2] = T[i];
        }
    }

    void r_flip()
    {
        R_flip();
        R_flip();
        R_flip();
    }

    void L_flip()
    {
        for(int i=0; i<3; i++)
        {
            T[i] = RB[9+i][0];
            RB[9+i][0] = RB[15+i][0];
            RB[15+i][0] = RB[6+i][0];
            RB[6+i][0] = RB[12+i][0];
            RB[12+i][0] = T[i];
        }
    }

    void l_flip()
    {
        L_flip();
        L_flip();
        L_flip();
    }

    void U_flip()
    {
        for(int i=0; i<3; i++)
        {
            T[i] = RB[0][i];
            RB[0][i] = RB[9][i];
            RB[9][i] = RB[3][i];
            RB[3][i] = RB[6][i];
            RB[6][i] = T[i];
        }
    }

    void u_flip()
    {
        U_flip();
        U_flip();
        U_flip();
    }

    void D_flip()
    {
        for(int i=0; i<3; i++)
        {
            T[i] = RB[5][i];
            RB[5][i] = RB[11][i];
            RB[11][i] = RB[2][i];
            RB[2][i] = RB[8][i];
            RB[8][i] = T[i];
        }
    }

    void d_flip()
    {
        D_flip();
        D_flip();
        D_flip();
    }

    void F_flip()
    {
        for(int i=0; i<3; i++)
        {
            T[i] = RB[3+i][2];
            RB[3+i][2] = RB[15][i];
            RB[15][i] = RB[i][0];
            RB[i][0] = RB[14][i];
            RB[14][i] = T[i];
        }
    }

    void f_flip()
    {
        F_flip();
        F_flip();
        F_flip();
    }

    void B_flip()
    {
        for(int i=0; i<3; i++)
        {
            T[i] = RB[0][i];
            RB[0][i] = RB[15][i];
            RB[15][i] = RB[3][i];
            RB[3][i] = RB[12][i];
            RB[12][i] = T[i];
        }
    }

    void b_flip()
    {
        B_flip();
        B_flip();
        B_flip();
    }





    int count=1;
    bool match=false;

    char seq[80];
    scanf("%s", seq);
    printf("%s\n", seq);


    while(match!=true)
    {
        for(int i=0; i<strlen(seq); i++)
        {
            switch(seq[i])
            {
            case 'U':
                U_flip();
                break;
            case 'u':
                u_flip();
                break;

            case 'D':
                D_flip();
                break;
            case 'd':
                d_flip();
                break;

            case 'R':
                R_flip();
                break;
            case 'r':
                r_flip();
                break;

            case 'L':
                L_flip();
                break;
            case 'l':
                l_flip();
                break;

            case 'F':
                F_flip();
                break;
            case 'f':
                f_flip();
                break;

            case 'B':
                B_flip();
                break;
            case 'b':
                b_flip();
                break;
            }
        }

        int flag=true;
        bool stop=false;

        for(int i=0; i<18 && !stop; i++)
        {
            for(int j=0; j<3 && !stop; j++)
            {
                if(RB[i][j]!=cmp[i])
                {
                    count++;
                    stop=true;
                    flag=false;
                }
            }

        }
//        if(flag)
//        {
//            match=true;
//        }
        match=true;
    }


    printf("%d\n",count);
    for(int i=0; i<18; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("%c ",RB[i][j]);
        }
        if((i+1)%3==0){
            printf("\n");
        }
        printf("\n");
    }


    return 0;
}
