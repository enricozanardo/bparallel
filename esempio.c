#include <stdio.h>

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
    
    printf("size di i : %ld bytes\n", sizeof(i));

    say_hello();
    say_goodbye(123);
    say_godbye();

    return 0;
}