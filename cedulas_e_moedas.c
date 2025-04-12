#include <stdio.h>

int main() {
    float valor_total;
    int valor, resto;
    int n100 = 0, n50 = 0, n20 = 0, n10 = 0, n5 = 0, n2 = 0, m1r = 0, m50 = 0, m25 = 0, m10 = 0, m5 = 0, m1 = 0;

    scanf("%f", &valor_total);
    valor = (int)(valor_total * 100 + 0.5);

    if (valor >= 10000) {
    n100 = valor / 10000;
    resto = valor % 10000;
    valor = resto;
    } if (valor >= 5000) {
        n50 = valor / 5000;
        resto = valor % 5000;
        valor = resto;
    } if (valor >= 2000) {
        n20 = valor / 2000;
        resto = valor % 2000;
        valor = resto;
    } if (valor >= 1000) {
        n10 = valor / 1000;
        resto = valor % 1000;
        valor = resto;
    } if (valor >= 500){
        n5 = valor / 500;
        resto = valor % 500;
        valor = resto;
    } if (valor >= 200) {
        n2 = valor / 200;
        resto = valor % 200;
        valor = resto;
    } if (valor >= 100) {
        m1r = valor / 100;
        resto = valor % 100;
        valor = resto;
    } if (valor >= 50) {
        m50 = valor / 50;
        resto = valor % 50;
        valor = resto;
    } if (valor >= 25) {
        m25 = valor / 25;
        resto = valor % 25;
        valor = resto;
    } if (valor >= 10) {
        m10 = valor / 10;
        resto = valor % 10;
        valor = resto;
    } if (valor >= 5) {
        m5 = valor / 5;
        resto = valor % 5;
        valor = resto;
    } m1 = valor;
    
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", n100);
    printf("%d nota(s) de R$ 50.00\n", n50);
    printf("%d nota(s) de R$ 20.00\n", n20);
    printf("%d nota(s) de R$ 10.00\n", n10);
    printf("%d nota(s) de R$ 5.00\n", n5);
    printf("%d nota(s) de R$ 2.00\n", n2);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", m1r);
    printf("%d moeda(s) de R$ 0.50\n", m50);
    printf("%d moeda(s) de R$ 0.25\n", m25);
    printf("%d moeda(s) de R$ 0.10\n", m10);
    printf("%d moeda(s) de R$ 0.05\n", m5);
    printf("%d moeda(s) de R$ 0.01\n", m1);
    return 0;
}