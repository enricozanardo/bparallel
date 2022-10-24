#include <stdio.h>

int main() {

    int buf[2];
    char c = 'c';
    char *p_c;
    int *next;

    p_c = &c;

    printf("Ciao Enrico\n");
    printf("c value: %c\n", c);
    printf("c address: %p\n", &c);
    printf("p_c address: %p\n", &p_c);

    c = 'd';
    
    printf("c value: %c\n", c);
    printf("p_c value: %c\n", *p_c);

    buf[0] = 0;

    next = &buf[0];

    printf("next address: %p\n", &next);

    *next++; // move the pointer to the next address of the array

    printf("updated next address: %p\n", &next);

    printf("next: %d\n", *next);

    buf[1] = 1;

    printf("next: %d\n", *next);

    *next = 4;

    printf("next: %d\n", buf[1]);

    return 0;
}