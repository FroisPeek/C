#include <stdio.h>
#include <locale.h>

int x = 0;

int main(){
    setlocale(LC_ALL, "Portuguese");
    printf("Fa�a um Programa que pe�a um valor e mostre na tela se o valor � positivo ou negativo.");

    printf("\nInforme o valor: ");
    scanf("%d", &x);

    if(x > 0){
        printf("O valor de %d � positivo!", x);
    }
    else if(x < 0){
        printf("O valor de %d � negativo!", x);
    }
    else{
        printf("O valor de 0 � nulo!");
    }
}
