#include <stdio.h>

int main(void){
    /*   tabuada
    int x;
    printf("Informe um numero: ");
    scanf("%d", &x);
    for (int i = 1; i <= 10; i++){
        printf("%d x %d = %d\n", i, x, i*x);
    }
    */

    /*   for somando os valores de 0 até o valor informado
    int x;
    int ct;
    printf("Informe um numero: ");
    scanf("%d", &x);
    for (int i = 0; i <= x; i++){
        ct += i;
    }
    printf("Soma: %d", ct);
    */

    /*    fatorial do valor informado
    int x;
    int ct = 1;
    printf("Informe um numero: ");
    scanf("%d", &x);
    for (int i = x; i > 0; i--){
        ct *= i;
    }
    printf("Fatorial: %d", ct);
    */

    /* piramede de numero
    int x;
    printf("Informe o valor: ");
    scanf("%d", &x);
    for (int i = 1;i <= x + 1; i++){
        for (int j = 1; j < i; j++){
            printf("%d ", j);
        }
        printf("\n");
    }
    */
}
