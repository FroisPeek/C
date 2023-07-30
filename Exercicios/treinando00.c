#include <stdio.h>
#include <locale.h>

int valorX = 0;
int valorY = 0;

int main(){
    setlocale(LC_ALL, "Portuguese");

    printf("Insira a seguir os numeros para a soma!\n");
    printf("Insira o valor de x: ");
    scanf("%d", &valorX);
    printf("Insira o valor de y: ");
    scanf("%d", &valorY);

    int resultado = valorX + valorY;

    printf("O resultado da soma dos valores x e y é: %d", resultado);
}
