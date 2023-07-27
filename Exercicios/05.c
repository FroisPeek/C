#include <stdio.h>
#include <locale.h>

int n, i;
char soma = 0;


int main(){
    setlocale(LC_ALL, "Portuguese");
    printf("Implemente o programa em C usando o for que calcula a soma dos primeiros n números naturais, onde n é fornecido pelo usuário.");

    printf("\nInsira o valor de 'n' para que faça a soma dos primeiros n primeiros números: ");
    scanf("%d", &n);

    for (i = 0; i < n+1; i++){
        printf("\n%d", i);
        soma += i;
    }
    printf("\nA soma n primeiros valores: %d", soma);
}
