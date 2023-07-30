#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    printf("Toda vez que ele traz um peso de peixes maior que o estabelecido pelo regulamento de pesca do estado de São Paulo (50 quilos) deve pagar uma multa de R$ 4,00 por quilo excedente.\n");

    float PesoPeixe = 0;
    float multa = 0;

    printf("Informe o peso do peixe (kg): ");
    scanf("%f", &PesoPeixe);
    if (PesoPeixe > 50){
        multa = (PesoPeixe - 50) * 4;
        printf("O valor da multa: %.2f", multa);
    }
    else{
        printf("Sem valor de multa!");
    }
}
