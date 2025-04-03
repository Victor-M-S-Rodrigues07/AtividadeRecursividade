// 11) Contagem de Caracteres

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int contadorCaracteres (char palavra [], int index, int contador, char letra) {

//     if (index >= strlen (palavra)) {

//         return contador;
//     }

//     else {

//         if (palavra [index] != letra) {

//             return contadorCaracteres (palavra, index + 1, contador, letra);
//         }

//         else {

//             return contadorCaracteres (palavra, index + 1, contador + 1, letra);            
//         }
//     }
// }

// int main () {

//     char palavra[] = "abracada";
//     char letra = 'a';

//     printf ("A letra %c aparece %d vezes na palavra %s!", letra, contadorCaracteres (palavra, 0, 0, letra), palavra);
// }

// 12) Soma de Elementos de um Array

// #include <stdio.h>
// #include <stdlib.h>

// int somaElementosArray (int array[], int tamanho, int indice) {

//     if (indice >= tamanho) {

//         return 0;
//     }

//     else {

//         return array [indice] + somaElementosArray (array, tamanho, indice + 1);
//     }
// }

// int main () {

//     int array[] = {1, 2, 3, 4, 5};
//     size_t tamanho = sizeof(array) / sizeof (array[0]); 
    
//     //Nota mental: O retorno de um "sizeof" é size_t, ou seja, foi recomendado usar um tipo diferente de dados;

//     printf ("A soma dos elementos da array: %d", somaElementosArray (array, tamanho, 0));
// }

// 13) Verificação de Número Primo

#include <stdio.h>

int verificarPrimo (int N, int divisor) {

    if (N <= 1) {

        return 0;
    }

    else if (N == 2) {

        return 1;
    }

    else {

        if (N % divisor == 0) {

            return 0;
        }

        else {

            if (divisor * divisor > N) {

                return 1;
            }

            else {

                return verificarPrimo (N, divisor + 1);
            }
        }
    }
}

int main () {

    int N = 64;

    int resultado = verificarPrimo (N, 2);

    if (resultado == 0) {

        printf ("O numero nao e primo");
    }

    else {

        printf ("O numero e primo!");
    }
}