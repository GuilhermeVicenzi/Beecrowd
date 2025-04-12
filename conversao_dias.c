#include <stdio.h>

int main() {
    int D, M = 0, A = 0;

    scanf("%d", &D);

    if (D >= 365) {
        A = D / 365;
        D = D % 365;
    } if (D < 365) {
        M = D / 30;
        int resto = D % 30;
        D = resto;
    }

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", A, M, D);
    return 0;
}