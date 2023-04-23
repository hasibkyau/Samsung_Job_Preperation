#include <stdio.h>

int main()
{
    int TempArr[3][3] = {0,0,0,0,0,0,0,0,0};
    void flip2DArray(int arr[3][3], int rows, int cols)
    {

        for (int i = 0; i<3; i++)
        {
            TempArr[0][i]=arr[2-i][0];
            TempArr[1][i]=arr[2-i][1];
            TempArr[2][i]=arr[2-i][2];
        }
        for (int i = 0; i <3; i++)
        {
            arr[0][i]=TempArr[0][i];
            arr[1][i]=TempArr[1][i];
            arr[2][i]=TempArr[2][i];
        }
    }

    int array[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    flip2DArray(array, 3, 3);

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("%d ",array[i][j]);
        }
        printf("\n");
    }

    return 0;
}
