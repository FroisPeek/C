#include <stdio.h>

// calcula a soma dos valores de 0 a 100.

int main(){
    int i, ct;
    for(i =0 ; i <= 100; i++){
    printf("%d ", i);
    ct += i;
    }
    printf("\nA soma dos valores: %d", ct);
}
