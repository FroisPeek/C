#include <stdio.h>
#include <locale.h>

char ctp = 0;
char cti = 0;
char somap = 0;
char somai = 0;

x = 0;

int main(){
    setlocale(LC_ALL, "Portuguese");
    printf("Construa o programa que calcule a média aritmética dos números pares e a média aritmética dos números ímpares. O usuário fornecerá os valores de entrada que pode ser um número qualquer par ou ímpar. A condição de saída será o número menos 1 (-1). \n");
    while (1){
            printf("Informe a seguir o valor que deseja inserir: ");
            scanf("%d", &x);
            if (x == -1){
                break;
            }
            if (x%2 == 0){
                ctp ++;
                somap += x;
            }
            else{
                cti++;
                somai += x;
            }
    }
    printf("Os contadores de impar: %d\n", cti);
    printf("Os contadores de par: %d", ctp);
    printf("\nAgora seguiremos para fazer a média aritmética dos contadores a cima!");

    char mediap = somap/ctp;
    char mediai = somai/cti;

    printf("\nMedia dos pares: %d  /   Media dos impares: %d", mediap, mediai);
}
