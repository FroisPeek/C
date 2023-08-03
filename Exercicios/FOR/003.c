#include <stdio.h>

//Imprimir os valores pares de 1 a 50.

int main(){
    int i, pares;
    for(i = 1; i <= 50; i++){
        if(i % 2 == 0){
            printf("%d ", i);
        }
    }
}
