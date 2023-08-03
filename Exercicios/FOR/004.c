#include <stdio.h>

// calcular o fatorial de um valor fornecido pelo usuario.

int main(){
    int i, valor, fatorial = 1;
    printf("Informe o valor: ");
    scanf("%d", &valor);
    for(i = valor; i >= 1; i--){
        printf("%d ", i);
        fatorial *= i;
    }
    printf("\nO fatorial de %d: %d", valor, fatorial);
}
