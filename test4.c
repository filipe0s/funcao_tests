#include <stdio.h>
//Escreva uma função que receba por parâmetro a altura e o raio de um cilindro circular e retorne o volume desse cilindro. 
//O volume de um cilindro circular é calculado por meio da seguinte fórmula: V = π * raio^2 * altura, em que π = 3.1414592

    float cilindro(float alt, float rai) {
            return (3.1414592 * (rai * rai) * alt);
    }

int main(){
    float altura, raio, result;

        printf ("Altura: \n");
            scanf ("%f", &altura);
        printf ("Raio: \n");
            scanf ("%f", &raio);

        result = cilindro(altura, raio);

            printf ("Cilndro: %.2f\n", result);

    return 0;
}