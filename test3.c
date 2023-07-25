#include <stdio.h>
//Escreva uma função que receba por parâmetro uma temperatura em graus Fahrenheit e a retorne convertida em graus Celsius. 
//A fórmula de conversão é: C = (F - 32.0) X (5.0/9.0), sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.

    float conversao(float fah, float cels) {
             return (fah - 32.0) * (5.0/9.0);
    }

int main() {
    float fahrenheit, celsius, result;

        printf ("Insira o grau em Farenheit: ");
            scanf ("%f", &fahrenheit);

                    result = conversao(fahrenheit, celsius);


                printf ("Celsius: %f\n", result);
    return 0;
}