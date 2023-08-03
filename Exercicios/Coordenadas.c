#include <stdio.h>

    //Leia os valores das coordenadas X e Y de um ponto no plano
    //cartesiano. A seguir, determine qual o quadrante ao qual pertence o
    //ponto (Q1, Q2, Q3 ou Q4). Se o ponto estiver na origem, escreva a
    //mensagem �Origem�. Se o ponto estiver sobre um dos eixos escreva
    //"Eixo X� ou �Eixo Y�, conforme for a situa��o.


int main(){
    float x, y;

    printf("Valor de x: ");
    scanf("%f", &x);
    printf("Valor de y: ");
    scanf("%f", &y);
    if (x == 0 && y == 0){
        printf("Ponto de origem!");
    }
    else if(x == 0 && y > 0){
        printf("Eixo y");
    }
    else if(y == 0 && x > 0){
        printf("Eixo x");
    }
    else if(x > 0 && y > 0){
        printf("Q1");
    }
    else if(x < 0 && y > 0){
        printf("Q2");
    }
    else if(x < 0 && y < 0){
        printf("Q3");
    }
    else if(x > 0 && y < 0){
        printf("Q4");
    }
}
