
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{


    char seq[80];
    scanf("%s", seq);

    char Blue='B', Orange='O', Green='G', Red='R', White='W', Yellow='Y', Temp='T';

    char T[3]= {Temp, Temp, Temp};

    char R[3][3]= {Orange, Orange, Orange,
                   Orange, Orange, Orange,
                   Orange, Orange, Orange,
                  };

    char L[3][3]= {Red, Red, Red,
                   Red, Red, Red,
                   Red, Red, Red,
                  };

    char F[3][3]= {Blue, Blue, Blue,
                   Blue, Blue, Blue,
                   Blue, Blue, Blue,
                  };

    char B[3][3]= {Green, Green, Green,
                   Green, Green, Green,
                   Green, Green, Green,
                  };

    char U[3][3]= {White, White, White,
                   White, White, White,
                   White, White, White,
                  };

    char D[3][3]= {Yellow, Yellow, Yellow,
                   Yellow, Yellow, Yellow,
                   Yellow, Yellow, Yellow,
                  };

    char TempArr[3][3]= {Temp, Temp, Temp,
                         Temp, Temp, Temp,
                         Temp, Temp, Temp,
                        };
    char TT[4][3]= {Temp, Temp, Temp,
                         Temp, Temp, Temp,
                         Temp, Temp, Temp,
                         Temp, Temp, Temp,
                        };


    void R_flip()
    {
        for(int i=0; i<3; i++)
        {
            TT[0][i] = F[i][2];
            TT[1][i] = D[i][2];
            TT[2][i] = B[2-i][0];
            TT[3][i] = U[2-i][2];

            TempArr[0][i]=R[2-i][0];
            TempArr[1][i]=R[2-i][1];
            TempArr[2][i]=R[2-i][2];

        }
        for(int i=0; i<3; i++)
        {
            U[i][2] = TT[0][i];
            F[i][2] = TT[1][i];
            D[i][2] = TT[2][i];
            B[i][0] = TT[3][i];

            R[0][i]=TempArr[0][i];
            R[1][i]=TempArr[1][i];
            R[2][i]=TempArr[2][i];
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
            TT[0][i] = B[2-i][2];
            TT[1][i] = D[2-i][0];
            TT[2][i] = F[i][0];
            TT[3][i] = U[i][0];


            TempArr[0][i]=L[2-i][0];
            TempArr[1][i]=L[2-i][1];
            TempArr[2][i]=L[2-i][2];

        }
        for(int i=0; i<3; i++)
        {
            U[i][0] = TT[0][i];
            B[i][2] = TT[1][i];
            D[i][0] = TT[2][i];
            F[i][0] = TT[3][i];

            L[0][i]=TempArr[0][i];
            L[1][i]=TempArr[1][i];
            L[2][i]=TempArr[2][i];
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
            TT[0][i] = R[0][i];
            TT[1][i] = B[0][i];
            TT[2][i] = L[0][i];
            TT[3][i] = F[0][i];

            TempArr[0][i]=U[2-i][0];
            TempArr[1][i]=U[2-i][1];
            TempArr[2][i]=U[2-i][2];

        }
        for(int i=0; i<3; i++)
        {
            F[0][i] = TT[0][i];
            R[0][i] = TT[1][i];
            B[0][i] = TT[2][i];
            L[0][i] = TT[3][i];

            U[0][i]=TempArr[0][i];
            U[1][i]=TempArr[1][i];
            U[2][i]=TempArr[2][i];
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
            TT[0][i] = L[2][i];
            TT[1][i] = B[2][i];
            TT[2][i] = R[2][i];
            TT[3][i] = F[2][i];


            TempArr[0][i]=D[2-i][0];
            TempArr[1][i]=D[2-i][1];
            TempArr[2][i]=D[2-i][2];

        }
        for(int i=0; i<3; i++)
        {
            F[2][i] = TT[0][i];
            L[2][i] = TT[1][i];
            B[2][i] = TT[2][i];
            R[2][i] = TT[3][i];

            D[0][i]=TempArr[0][i];
            D[1][i]=TempArr[1][i];
            D[2][i]=TempArr[2][i];
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
            TT[0][i] = L[2-i][2];
            TT[1][i] = D[0][i];
            TT[2][i] = R[2-i][0];
            TT[3][i] = U[2][i];

            TempArr[0][i]=F[2-i][0];
            TempArr[1][i]=F[2-i][1];
            TempArr[2][i]=F[2-i][2];

        }
        for(int i=0; i<3; i++)
        {
            U[2][i] = TT[0][i];
            L[i][2] = TT[1][i];
            D[0][i] = TT[2][i];
            R[i][0] = TT[3][i];

            F[0][i]=TempArr[0][i];
            F[1][i]=TempArr[1][i];
            F[2][i]=TempArr[2][i];
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
            TT[0][i] = R[i][2];
            TT[1][i] = D[2][i];
            TT[2][i] = L[i][0];
            TT[3][i] = U[0][2-i];

            TempArr[0][i]=B[2-i][0];
            TempArr[1][i]=B[2-i][1];
            TempArr[2][i]=B[2-i][2];

        }
        for(int i=0; i<3; i++)
        {
            U[0][i] = TT[0][i];
            R[2-i][2] = TT[1][i];
            D[2][i] = TT[2][i];
            L[i][0] = TT[3][i];

            B[0][i]=TempArr[0][i];
            B[1][i]=TempArr[1][i];
            B[2][i]=TempArr[2][i];
        }
    }
    void b_flip()
    {
        B_flip();
        B_flip();
        B_flip();
    }

    int count = 1;
    bool match = false;


    while(!match)
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

        bool stop=false;
        for(int i=0; i<3 && !stop; i++)
        {
            for(int j=0; j<3 && !stop; j++)
            {
                if(R[i][j]!='O' || L[i][j]!='R' || F[i][j]!='B' || B[i][j]!='G' || U[i][j]!='W' || D[i][j]!='Y')
                {
                    stop=true;
                    count++;
                }
            }
        }
        if(!stop)
        {
            match=true;
        }

//        match=true;
    }

    printf("%d\n",count);

    return 0;
}
