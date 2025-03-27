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

// #include <stdio.h>

// int a = 0;
// int b = 1;

// int fibonacci (int n) {

//     if (n == 0) {

//         return 0;
//     }

//     else if (n == 1) {

//         return 1;
//     }

//     else {

//         return fibonacci (n - 1) + fibonacci (n - 2);
//     }

// }

// int main () {

//     int n = 25;
        
//     printf ("Enesimo termo da sequencia de Fibonacci: %d", fibonacci (n));
// }

// 4) Potência

// #include <stdio.h>

// int potencia (int x, int n) {

//     if (n == 0) {

//         return 1;
//     }

//     int temp = potencia (x, n / 2);

//     if (n % 2 == 0) {

//         return temp * temp;
//     }

//     else {

//         return temp * temp * x;
//     }
// }

// int main () {

//     int x = 2;
//     int n = 4;

//     printf ("%d elevado a %d potencia: %d", x, n, potencia (x, n));
// }

// 5) Contagem Regressiva

// #include <stdio.h> 

// int contagem (int n) {

//     if (n < 0) {

//         return 0;
//     }

//     else {

//         printf ("%d\n", n);
//         return contagem (n - 1);
//     }
// }


// int main () {

//     int n = 10;

//     contagem(n);

//     printf ("Lancar!!!");
// }

// 6) Soma de Dígitos

// #include <stdio.h>

// int soma = 0;

// int somaDigitos (int n, int soma) {

//     if (n <= 0) {

//         return soma;
//     }

//     else {

//         return soma + somaDigitos (n / 10, n % 10);
//     }
// }

// int main () {

//     int n = 9876;

//     printf ("Soma dos termos: %d\n", somaDigitos (n, 0));
// }

// 7) Inversão de String

#include <stdio.h>
#include <string.h>

void inverterString (char palavra [], int inicial, int final) {

    if (inicial >= final) {

        return;
    }

    char temp = palavra [inicial];
    palavra [inicial] = palavra [final];
    palavra [final] = temp;
    
    inverterString (palavra, inicial + 1, final - 1);
}

int main () {

    char palavra [] = "Perfume";
    int tamanho = strlen (palavra);

    inverterString (palavra, 0, tamanho - 1);

    printf ("Palavra invertida: %s", palavra);
}