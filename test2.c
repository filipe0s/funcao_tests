#include <stdio.h>
//Faça uma função que receba um número inteiro de 1 a 12 e imprima em tela o mês e a sua quantidade de dias de acordo com o número digitado pelo usuário. Exemplo: Entrada = 4. Saída = abril.

const char* funcao (int num) {
    if (num == 1)
    {
        return "janeiro";
    } if (num == 2)
    {
        return "fevereiro";
    } if (num == 3)
    {
        return "Março";
    } if (num == 4)
    {
        return "abril";
    } if (num == 5)
    {
        return "Maio";
    } if (num == 6)
    {
        return "junho";
    } if (num == 7)
    {
        return "julho";
    } if (num == 8)
    {
        return "agosto";
    } if (num == 9)
    {
        return "setembro";
    } if (num == 10)
    {
        return "outubro";
    } if (num == 11)
    {
        return "novembro";
    } if (num == 12)
    {
        return "dezembro";
    } else {
        return "mês inválido";
    }
    
}

int main(){
    int n;

        printf ("Selecione o mês: ");
            scanf ("%d", &n);
                
                const char* meses = funcao(n);

                    printf ("Mês: %s\n", meses);

    return 0;
}