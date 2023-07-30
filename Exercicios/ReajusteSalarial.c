#include <stdio.h>
#include <locale.h>


int main(){
    setlocale(LC_ALL, "Portuguese");
    printf("Faça um programa que recebe o salário de um colaborador e o reajuste segundo o seguinte critério, baseado no salário atual:");
    printf("\n-----------------------\n");

    float salario, aumento, reajuste;
    float porcentagem;

    printf("Informe seu salario para o reajuste: ");
    scanf("%f", &salario);

    if(salario <= 280.00){
        reajuste = (salario/100) * 20;
        aumento = salario + reajuste;
        porcentagem = 20;
    }
    else if(salario >= 280.00 && salario <= 700.00){
        reajuste = (salario/100) * 15;
        aumento = salario + reajuste;
        porcentagem = 15;
    }
    else if(salario >= 700.00 && salario <= 1500.00){
        reajuste = (salario/100) * 10;
        aumento = salario + reajuste;
        porcentagem = 15;
    }
    else if(salario >= 1500.00){
        reajuste = (salario/100) * 5;
        aumento = salario + reajuste;
        porcentagem = 15;
    }
    else{
        printf("VALOR INAPROPRIADO! TENTE NOVAMENTE!");
    }

    printf("\nO seu salario antes do reajuste: %.2f", salario);
    printf("\nO percentual de aumento aplicado: %.2f", porcentagem);
    printf("\nO valor de aumento: %.2f", reajuste);
    printf("\nO novo salario: %.2f", aumento);
}
