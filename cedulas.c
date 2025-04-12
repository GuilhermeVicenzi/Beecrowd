#include <stdio.h>

int main() {
    int valor, resto;
    int n100 = 0, n50 = 0, n20 = 0, n10 = 0, n5 = 0, n2 = 0, n1 = 0;

    scanf("%d", &valor);
    int valor_total = valor;

    if (valor >= 100) {
    n100 = valor / 100;
    resto = valor % 100;
    valor = resto;
    } if (valor >= 50) {
        n50 = valor / 50;
        resto = valor % 50;
        valor = resto;
    } if (valor >= 20) {
        n20 = valor / 20;
        resto = valor % 20;
        valor = resto;
    } if (valor >= 10) {
        n10 = valor / 10;
        resto = valor % 10;
        valor = resto;
    } if (valor >= 5){
        n5 = valor / 5;
        resto = valor % 5;
        valor = resto;
    } if (valor >= 2) {
        n2 = valor / 2;
        resto = valor % 2;
        valor = resto;
    }

    n1 = valor;
    
    printf("%d\n", valor_total);
    printf("%d nota(s) de R$ 100,00\n", n100);
    printf("%d nota(s) de R$ 50,00\n", n50);
    printf("%d nota(s) de R$ 20,00\n", n20);
    printf("%d nota(s) de R$ 10,00\n", n10);
    printf("%d nota(s) de R$ 5,00\n", n5);
    printf("%d nota(s) de R$ 2,00\n", n2);
    printf("%d nota(s) de R$ 1,00\n", n1);
    return 0;
}