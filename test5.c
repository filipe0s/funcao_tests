#include <stdio.h>
//Escreva uma função para o cálculo do volume de uma esfera V = (4/3) * π * r^3 em que pi = 3.1414592
//valor do raio r deve ser passado por parâmetro.

        float esfera(float rai) {
                return ((4/3) * 3.1414592 * (rai*rai*rai));
        }

int main () {
    float raio, result;

        printf ("Raio: \n");
            scanf ("%f", &raio);

                result = esfera(raio);

        printf ("Esfera: %.2f\n", result);        

    return 0;
}
