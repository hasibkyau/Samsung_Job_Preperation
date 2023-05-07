#include <stdio.h>
#include <math.h>

int main()
{
    int N;
    scanf("%d",&N);
    double arr[N];

    for(int i=0; i<N; i++)
    {
        double temp;
        scanf("%lf",&temp);
        arr[i]=temp;
    }

    int visited=0;
    for(int i=0; i<N; i++)
    {
        double even=(arr[i])/2.0;
        if(floor(even)*2.0 != arr[i])
        {
            if(arr[i]>0.00){
            arr[i]= arr[i]-1;
            visited++;
            }
        }
        else{
            visited++;
            for(int j=i; j>=0; j--){
                if(arr[j]>0){
                arr[j] = arr[j]-1;
                }
            }
            break;
        }

    }

    double sum=0;
    for(int i=0; i<N; i++)
    {
        sum = sum + arr[i];
    }

    printf("%d %.0lf\n",visited, sum);

    return 0;
}
