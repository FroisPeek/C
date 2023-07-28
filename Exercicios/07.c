#include <stdio.h>
#include <locale.h>


int main(){
    setlocale(LC_ALL, "Portuguese");
    float porHora, SalarioBruto, ImpostodeRenda, INSS, Sindicato, SalarioLiquido;
    int horaMes = 0;

    printf("Informe quanto é ganho por hora: ");
    scanf("%f", &porHora);
    printf("Informe quantas horas trabalha por mes: ");
    scanf("%d", &horaMes);

    SalarioBruto = porHora * horaMes;
    ImpostodeRenda = (SalarioBruto / 100) * 11;
    INSS = (SalarioBruto / 100) * 8;
    Sindicato = (SalarioBruto / 100) * 5;

    SalarioLiquido = SalarioBruto - (ImpostodeRenda + INSS + Sindicato);

    printf("---------------------------------------\n");
    printf("Salário Bruto : %.2fR$\n", SalarioBruto);
    printf("Imposto de renda (11%%): %.2fR$\n", ImpostodeRenda);
    printf("INSS (8%%): %.2fR$\n", INSS);
    printf("Sindicato (5%%): %.2fR$\n",Sindicato);
    printf("= Salario Liquido: %.2fR$\n", SalarioLiquido);
}
