// C++ program to illustrate the
// iterators in vector
#include <iostream>
#include <vector>

using namespace std;

bool solve(int n)
{
    int x=n;
    if(n==0) return 1;
    else if(n<0) return 0;
    else
    {
        double reverse = 0;
        int remainder;

        while (x != 0)
        {
            remainder = x % 10;
            reverse = (reverse * 10) + remainder;
            x /= 10;
        }
        printf("%.0lf",reverse);

        int m=reverse;

        return (m == n);

    }
}


int main()
{
    int n;
    scanf("%d", &n);
    bool res = solve(n);
    return 0;
}


