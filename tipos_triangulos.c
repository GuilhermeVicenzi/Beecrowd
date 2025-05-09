#include <stdio.h>
#include <math.h>

int main() {
    double A, B, C;
    scanf("%lf %lf %lf", &A, &B, &C);

    double troca;

    if (A > B && A > C) {
        if (B > C){
        } else {
            troca = B;
            B = C;
            C = troca;
            troca = 0;
        }
    } else if (B > A && B > C) {
        troca = A;
        A = B;
        B = troca;
        troca = 0;
        if (B > C){
        } else {
            troca = B;
            B = C;
            C = troca;
            troca = 0;
        }
    } else {
        troca = A;
        A = C;
        C = troca;
        troca = 0;
        if (B > C) {
            
        } else {
            troca = B;
            B = C;
            C = troca;
            troca = 0;
        }
    }

    if (A >= (B + C)) {
        printf("NAO FORMA TRIANGULO\n");
    } else {
    if ((pow(A, 2) == ((pow(B, 2) + pow(C, 2))))) {
        printf("TRIANGULO RETANGULO\n");
    } if ((pow(A, 2) > ((pow(B, 2) + pow(C, 2))))) {
        printf("TRIANGULO OBTUSANGULO\n");
    } if ((pow(A, 2) < ((pow(B, 2) + pow(C, 2))))) {
        printf("TRIANGULO ACUTANGULO\n");
    } if (A == B && A == C && B == C) {
        printf("TRIANGULO EQUILATERO\n");
    } if ((A == B && A != C) || (A == C && A != B) || (B == C && B != A )) {
        printf("TRIANGULO ISOSCELES\n");
       }
    }

    return 0;
}