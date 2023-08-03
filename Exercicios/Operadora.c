#include <stdio.h>

    //Uma operadora de telefonia cobra R$ 50.00 por um plano básico que dá direito a 100 minutos de
    //telefone. Cada minuto que exceder a franquia de 100 minutos custa R$ 2.00. Fazer um programa para
    //ler a quantidade de minutos que uma pessoa consumiu, daí mostrar o valor a ser pago.


int main(){
    int minutos, multa;
    printf("Informe os minutos excedidos: ");
    scanf("%d", &minutos);


    if (minutos <= 100){
        printf("O valor a pagar: 50,00R$");
    }
    else{
        multa = (minutos - 100) * 2;
        printf("O valor a pagar: %dR$", multa+50);
    }
}
