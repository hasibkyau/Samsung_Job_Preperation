#include <stdio.h>

int main()
{
    double N1, N2, N3, N4, N5;
    scanf("%lf %lf %lf %lf", &N1, &N2, &N3, &N4);

    double Media = (N1*2 + N2*3 + N3*4 + N4*1)/10;
    printf("Media: %.1lf\n", Media);

    if(Media >= 7.0){
        printf("Aluno aprovado.\n");
    }
    else if(Media <5.0){
        printf("Aluno reprovado.\n");
    }
    else if(Media >= 5.0 && Media <= 6.9){
        printf("Aluno em exame.\n");

        scanf("%lf", &N5);
        printf("Nota do exame: %.1lf\n", N5);
        Media = (Media + N5) / 2;
        printf("Aluno aprovado.\n");
        printf("Media final: %.1lf\n", Media);

    }


    return 0;
}

