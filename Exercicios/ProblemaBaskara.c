#include <stdio.h>
#include <locale.h>
#include <math.h>


int main(){
    setlocale(LC_ALL, "Portuguese");
    //Fazer um programa para ler os tr�s coeficientes de uma equa��o do segundo grau. Usando a f�rmula
    //de Bhaskara, calcular e mostrar os valores das ra�zes x1 e x2 da equa��o com quatro casas decimais,
    //conforme exemplo. Se a equa��o n�o possuir ra�zes reais, mostrar uma mensagem.

    float a, b, c, delta, bhaskara1 , bhaskara2;

    printf("Informe o valor de A: ");
    scanf("%f", &a);
    printf("Informe o valor de B: ");
    scanf("%f", &b);
    printf("Informe o valor de C: ");
    scanf("%f", &c);

    delta = b*b - 4*a*c;
    bhaskara1 = (-b + sqrt(delta)) / (2*a);
    bhaskara2 = (-b - sqrt(delta)) / (2*a);

    printf("O primeiro valor da conta: %f", bhaskara1);
    printf("\nO segundo valor da conta: %f", bhaskara2);
}
