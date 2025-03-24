// 1) Fatorial

#include <stdio.h>

int fatorial (int n) {

    if (n == 0) {

        return 1;
    }

    else if (n < 0) {

        return -1;
    }

    else {

        return n * fatorial (n - 1);
    }

}
int main () {

    int n = -5;

    if (fatorial (n) == -1) {

        printf ("Nao existe fatorial de um numero negativo!");

    }

    else {

        printf ("Fatorial de %d: %d\n", n, fatorial (n));
    }
}