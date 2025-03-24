// 1) Fatorial

// #include <stdio.h>

// int fatorial (int n) {

//     if (n <= 0) {

//         return 1;
//     }

//     else {

//         return n * fatorial (n - 1);
//     }

// }
// int main () {

//     int n = 5;
    
//     printf ("Fatorial de %d: %d\n", n, fatorial (n));
    
// }

// 2) Soma de Números Naturais

// #include <stdio.h>

// int soma (int n) {

//     if (n <= 0) {

//         return 0;
//     }

//     else {

//         return n + soma (n - 1);
//     }
// }

// int main () {

//     int n = 7;

//     printf ("Soma dos primeiros %d numeros: %d\n", n, soma (n));

// }

// 3) Sequência de Fibonacci

#include <stdio.h>

int a = 0;
int b = 1;

int fibonacci (int n) {

    if (n == 0) {

        return 0;
    }

    else if (n == 1) {

        return 1;
    }

    else {

        return fibonacci (n - 1) + fibonacci (n - 2);
    }

}

int main () {

    int n = 25;
        
    printf ("Enesimo termo da sequencia de Fibonacci: %d", fibonacci (n));
}