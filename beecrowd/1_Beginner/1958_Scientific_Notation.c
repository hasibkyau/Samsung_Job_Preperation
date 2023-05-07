#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main()
{
    char arr[110];
    int decimal_num[110];
    int float_num[110];
    for(int i=0; i<110; i++)
    {
        decimal_num[i]=0;
        float_num[i]=0;
    }

    scanf("%s", arr);
    int len=strlen(arr), decimal_digits=0, float_digits=0, type=1;

    int i,j=0;
    for(i=0; i<len; i++)
    {
        if(arr[i] == '.')//if there is a dot
        {
            i++;
            break;
        }

        if(arr[i]== '-')
        {
            type=0; //if the number is negative number
        }
        else
        {
            decimal_num[j]=arr[i]-'0';
            decimal_digits++;
            j++;
        }
    }

    j=0;
    for(; i<len; i++)
    {
        int t = arr[i]-'0';
        if(t>0)
        {
            float_num[j]=arr[i]-'0';
        }
        float_digits++;
        j++;
    }


    printf("\nDecimala Digits =%d\n",decimal_digits);
    printf("Floating Digits =%d\n",float_digits);
    printf("Type =%d\n",type);


//    for(int i=0; i<decimal_digits; i++){
//        printf("%d\n",decimal_num[i]);
//    }
//
//    for(int j=0; j<float_digits; j++){
//       printf("%d",float_num[j]);
//    }

    if(float_digits==0)
    {
        if(type==0)
        {
            printf("-%d.",decimal_num[0]);
        }
        else
        {
            printf("+%d.",decimal_num[0]);
        }
        if(decimal_num[6]>5)
        {
            decimal_num[5] = decimal_num[5]+1;
        }
        for(int i=1; i<=4; i++)
        {
            printf("%d",decimal_num[i]);
        }
        printf("E+%d",decimal_digits-1);
    }
    else
    {
        if(decimal_digits>0){
            if(decimal_num[5] > 5){
               decimal_num[4]=decimal_num[4+1];
               float_num[3-decimal_digits-1]=float_num[3-decimal_digits-1]+1;
            }
            if(type==0){
                printf("-%d.",decimal_num[0]);
            }
            else{
                printf("+%d.",decimal_num[0]);
            }
            for(int i=1; i<decimal_digits; i++){
                if(i>4){
                    break;
                }
                printf("%d",decimal_num[i]);
            }

            if(decimal_digits<5){
                for(int i=0; i<5-decimal_digits; i++){
                printf("%d",float_num[i]);
            }
            }

            if(decimal_digits-1>9){
                printf("E+%d",decimal_digits-1);
            }
            else{
                printf("E+0%d",decimal_digits-1);
            }


        }
    }
    return 0;
}




