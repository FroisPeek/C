#include <stdio.h>
#include <locale.h>

int valor1, valor2, valor3;

int main(){
    setlocale(LC_ALL, "Portuguese");

    printf("Faça um Programa que leia três números e mostre-os em ordem decrescente.");
    printf("\nInsira o primeiro valor: ");
    scanf("%d", &valor1);
    printf("Insira o segundo valor: ");
    scanf("%d", &valor2);
    printf("Insira o terceiro valor: ");
    scanf("%d", &valor3);

    if (valor1 > valor2 && valor2 > valor3){
        printf("A ordem decresente ficou: %d , %d , %d", valor1, valor2, valor3);
    }
    else if (valor1 > valor3 && valor3 > valor2){
        printf("A ordem decresente ficou: %d , %d , %d", valor1, valor3, valor2);
    }
    else if (valor2 > valor1 && valor1 > valor3){
        printf("A ordem decresente ficou: %d , %d , %d", valor2, valor1, valor3);
    }
    else if (valor2 > valor3 && valor3 > valor1){
        printf("A ordem decresente ficou: %d , %d , %d", valor2, valor3, valor1);
    }
    else if(valor3 > valor2 && valor2 > valor1){
        printf("A ordem decresente ficou: %d , %d , %d", valor3, valor2, valor1);
    }
    else if (valor3 > valor1 && valor1 > valor2){
        printf("A ordem decresente ficou: %d , %d , %d", valor3, valor1, valor2);
    }
    else{
        printf("Todos os valores sao iguais ou tem dois valores iguais!");
    }
}
