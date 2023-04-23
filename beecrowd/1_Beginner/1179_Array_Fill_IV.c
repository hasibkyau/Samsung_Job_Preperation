#include <stdio.h>
#include <stdint.h>  // for uint64_t data type

int main()
{
    int x, par[5],p=0, impar[5], im=0;

    for(int i=0; i<15; i++)
    {
        scanf("%d", &x);
        if(x%2==0)
        {
            par[p]=x;
            p++;
            if(p==5)
            {
                for(int j=0; j<5; j++)
                {
                    printf("par[%d] = %d\n",j, par[j]);
                }
                p=0;
            }

        }
        else
        {
            impar[im]=x;
            im++;
            if(im==5)
            {
                for(int j=0; j<5; j++)
                {
                    printf("impar[%d] = %d\n",j, impar[j]);
                }
                im=0;
            }
        }
        if(i==14)
        {
            for(int j=0; j<im; j++)
            {
                if(impar[0] > 0)
                {
                    printf("impar[%d] = %d\n",j, impar[j]);
                }
            }

            for(int j=0; j<p; j++)
            {
                if(impar[0] > 0)
                {
                    printf("par[%d] = %d\n",j, par[j]);
                }
            }
        }
    }

    return 0;
}



