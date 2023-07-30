#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float nota1, nota2, media;

    printf("Faça um programa para a leitura de duas notas parciais de um aluno. O programa deve calcular a média alcançada pelo aluno (maior que 7).\n");

    printf("\nInforme a primeira nota do aluno: ");
    scanf("%f", &nota1);
    printf("\nInforme a segunda nota do aluno: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2)/2.0;

    if (media >= 7){
        printf("\nA nota final do aluno foi: %.1f\n", media);
        printf("Aprovado!\n");
    }
    else{
        printf("A nota final do aluno foi: %.1f\n", media);
        printf("Reprovado!\n");
    }
}
