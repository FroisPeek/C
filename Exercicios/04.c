#include <stdio.h>
#include <locale.h>


int i;

int main(){
    setlocale(LC_ALL, "Portuguese");

    printf("Elabore o programa que gere a sequ�ncia do dobro dos n�meros naturais at� 10 na ordem crescente.\n");
    for (i = 1; i < 11; i++){
        printf("%d\n", i*2);
    }
}
