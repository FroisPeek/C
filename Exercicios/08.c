#include <stdio.h>
#include <locale.h>

int num1 = 0;
int num2 = 0;

int main(){
    setlocale(LC_ALL, "Portuguese");

    printf("Fa�a um Programa que pe�a dois n�meros e imprima o maior deles.");
    printf("\nInforme o primeiro valor: ");
    scanf("%d", &num1);
    printf("Informe o segundo valor: ");
    scanf("%d", &num2);

    if (num1 > num2){
        printf("O valor maior � %d", num1);
    }
    else if (num2 > num1){
        printf("O valor maior � %d", num2);
    }
    else {
        printf("Os dois valores sao iguais!");
    }
}
