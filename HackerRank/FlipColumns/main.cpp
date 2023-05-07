#include <iostream>

using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int t;
    cin>>t;
    while(t--)
    {


    int n, m, k;
    int maxRow = 0;

    cin >> n >> m >> k;
    int matrix[n][m];

//User input
    int i,j;
    for(int i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            cin >> matrix[i][j];
        }
    }


    //checking the similar rows of the matrix that can be toggled with all 1's
    for(i=0; i<n; i++)
    {
        int nZeros = 0; //Number of zeros of a row
        int tempArr[m]; //A single row that will be compared with other rows.
        int nRow = 0; //Number of similar row.

        //Checking the elements of each row
        for(j=0; j<m; j++)
        {
            //Inserting the element of the single row
            tempArr[j] = matrix[i][j];
            //Counting the zeros
            if(matrix[i][j] == 0)
            {
                nZeros++;
            }
        }

        //If the row can be toggle by all 1's.
        if(k >= nZeros && (k-nZeros)%2 == 0 )
        {
            //Searching each row in the matrix
            for(int row=0; row<n; row++)
            {
                bool equal = true;
                //Compare each elements between the rows, until a mismatched.
                for(int col=0; col<m && equal; col++)
                {
                    if(tempArr[col] != matrix[row][col])//If mismatched
                    {
                        equal=false;
                    }
                }
                if(equal == true) //If matched
                {
                    nRow++;
                }
            }
        }
        //If the number of this similar row is greater than previous
        if(nRow > maxRow)
        {
            //The total number of rows with all 1's.
            maxRow = nRow;
        }
        //Repeate the procedure for all other rows in the matrix.
    }
    cout << maxRow<<endl;
    }
    return 0;
}
