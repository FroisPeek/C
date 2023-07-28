#include <stdio.h>
#include <locale.h>

int x = 0;

int main(){
    setlocale(LC_ALL, "Portuguese");
    printf("Faça um Programa que peça um valor e mostre na tela se o valor é positivo ou negativo.");

    printf("\nInforme o valor: ");
    scanf("%d", &x);

    if(x > 0){
        printf("O valor de %d é positivo!", x);
    }
    else if(x < 0){
        printf("O valor de %d é negativo!", x);
    }
    else{
        printf("O valor de 0 é nulo!");
    }
}
