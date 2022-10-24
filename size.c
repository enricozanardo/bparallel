#include <stdio.h>


double media(double a, double b) {
    return (a+b)/2;
}

double (*ptr_media)(double, double) = &media;

double media_somma(double (*ptr_funzione)(double, double), double a, double b, double c, double d) {
    double ab = ptr_funzione(a,b);
    double cd = ptr_funzione(c,d);

    return ab + cd;
}



int main() {


    int i = 4;
    int *pi1  = &i;
    int **pi2 = &pi1;

    // printf(" dimensione di un char %lu byte -- dimensione di un int %lu byte\n", sizeof(char), sizeof(int));
    // printf(" dimensione di un puntatore a char %lu byte -- dimensione di un puntatore a int %lu byte\n", sizeof(char*), sizeof(int*));

    printf("Il valore di i e': %d il suo indirizzo e': %p \n", i, &i);

    double res = ptr_media(5, 8);

    printf("Il risultato %f \n", res);

    double res_2 = media_somma(ptr_media, 5, 8, 9, 12);

    printf("risultato due: %f \n", res_2);

    return 0;
}
