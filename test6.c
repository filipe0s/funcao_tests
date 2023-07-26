#include <stdio.h>
//Escreva uma função que receba o peso (quilos) e a altura (metros) de uma pessoa. Calcule e retorne o IMC (índice de massa corporal) dessa pessoa: IMC = PESO / (ALTURA²)

float func(float quilos, float alt) {
    return (quilos / (alt*alt));
}

int main() {
    float peso, altura, result;

        printf ("Insira o peso: ");
            scanf ("%f", &peso);
        printf ("Insira a altura: ");
            scanf ("%f", &altura);    

                result = func(peso, altura);

                    printf ("IMC = %.2f\n", result);

    return 0;
}
