#include <stdio.h>

#include "testa.h"

void say_hello() {
    printf("Ciao Michele\n");
}

void say_goodbye(int a) {
    printf("Ciao, a presto %d e indirizzo %p \n", a, &a);
}

void say_godbye() {
    printf("Ciao DIO \n");
}



int main() {

    int i;

    i = 5;

    int a[] = { 29,3,5 };

    int *porco;

    porco = &i;

    // printf("Indirizzo di memoria dell'array a : %p\n", a);

    for (int i=0; i < 3; i++) {
        printf("Array a %d\n", (*(a+i)));
        printf("Indirizzo di memoria dell'array a : %p\n", &a[i]);
    }

    a[3] = 67;
    

    printf("size di i : %ld bytes e il valore e' %d\n", sizeof(i), i);
    printf("size di porco : %ld bytes e il valore e' %p  valore di porco %d \n", sizeof(porco), &porco, *porco);
    
    i = 8;
    *porco = 45;

    printf("size di i : %ld bytes e il valore e' %d\n", sizeof(i), i);
    printf("size di porco : %ld bytes e il valore e' %p  valore di porco %d \n", sizeof(porco), &porco, *porco);



    say_hello();
    say_goodbye(123);
    say_godbye();

    say_andrea();

    return 0;
}