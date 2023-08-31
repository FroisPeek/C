#include <stdio.h>

int main(){
    // Aula com introdução a Array e FOR

    /*
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    printf("Numbers: %d\n", *numbers);

    // Sizeof indica a quantidade de armazenamento, em bytes, necessária para armazenar um objeto.
    printf("SizeOf do Array: %ld\n", sizeof(numbers));
    printf("SizeOf do Inteiro: %ld", sizeof(int));

    int size = sizeof(numbers)/ sizeof(int);

    for (int i = 0; i <= size; i++){
        printf("%d\n", i);
    }
    */

    /*
    int numbers [] = {80, 10, 30, 40, 50};
    int soma = 0;

    int size = sizeof(numbers)/sizeof(int);
    for(int i = 0; i < size; i++){
        soma += numbers[i];
    }
    printf("Soma dos alunos: %d", soma);
    printf("\nA media do alunos: %d", soma/sizeof(size));
    */

    int number[4];  // declaro o tamanho do array pra 4
    int i;
    int size = sizeof(number)/ sizeof(int); // faço o calculo pra saber o tamanho do array
    for (i = 0; i < size; i++){ // peço pra informar o valor n vezes. n = size
        printf("Informe um valor para adicionar ao array: ");
        scanf("%d", &number[i]);
    }
    for (i = 0; i < size; i++){  // for para informar cada posição de valor do array
        printf("\n Valores: %ld", number[i]);
    }
    return 0;
}
















