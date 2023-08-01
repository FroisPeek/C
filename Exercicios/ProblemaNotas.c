#include <stdio.h>
#include <locale.h>


int main(){
    setlocale(LC_ALL, "Portuguese"); // A linguagem do programa fica em portugues, entao precisamos usar "," nas casas decimais!
    //Fazer um programa para ler as duas notas que um aluno obteve no primeiro e segundo semestres de
    //uma disciplina anual. Em seguida, mostrar a nota final que o aluno obteve (com uma casa decimal) no
    //ano juntamente com um texto explicativo. Caso a nota final do aluno seja inferior a 60.00, mostrar a
    //mensagem "REPROVADO", conforme exemplos.

    float nota1, nota2, media;

    printf("Informe a primeira nota do aluno: ");
    scanf("%f", &nota1);
    printf("Informe a segunda nota do aluno: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2);
    if (media >= 60){
        printf("A media final do aluno foi: %.1f", media);
        printf("\nAprovado!");
    } else{
        printf("A media do aluno foi: %.1f", media);
        printf("\nReprovado!");
    }
}
