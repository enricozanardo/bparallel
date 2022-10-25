// Dinamic examples

#include <stdio.h>
#include <stdlib.h>

void print_array(int a[], int dimensione);


int main() {
    int a[] = {19,12,33};

    int numero_elementi = 8;
    int *p;
    

    p = (int*) calloc(numero_elementi, sizeof(int));

    for(int i; i < numero_elementi; i++){
        p[i] = i;

        printf("elemento %d\n", (*(p+i)));
    }

    return 0;
}