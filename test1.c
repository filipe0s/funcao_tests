#include <stdio.h>
//Escreva uma função que receba por parâmetro dois números e retorne o maior deles.

int maior(int num1, int num2) {
    if (num1 > num2)
    {
        printf ("Maior: %d\n", num1);
    } else  if (num1 < num2) {
        printf ("Maior: %d\n", num2);
    } else {
        printf ("Números iguais\n");
    }
    
}

int main() {
    int n1, n2, result;

        printf ("Digite o pimeiro número: ");
            scanf ("%d", &n1);
        printf ("Digite o segundo número: ");
            scanf ("%d", &n2);

                result = maior (n1, n2);      

    return 0;
}
