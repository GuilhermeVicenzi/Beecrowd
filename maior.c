#include <stdio.h>
#include <stdlib.h>

int maior(int n1, int n2) {
    int n_maior = (n1 + n2 + abs(n1 - n2)) / 2;
    return n_maior;
}

int main() {
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);

    int maior_AB = maior(A, B);
    int maior_ABC = maior(maior_AB, C);

    printf("%d eh o maior\n", maior_ABC);
    return 0;
}