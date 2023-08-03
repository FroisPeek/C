#include <stdio.h>
#include <ctype.h>

int main(){
    int i, casos, quantasC, ctCobaias = 0;
    char cobaia[10];
    int ctc = 0 , ctr = 0, cts = 0;

    printf("Informe a quantidade de casos que serao digitados: ");
    scanf("%d", &casos);

    for(i = 1; i <= casos; i++ ){
        printf("Tipo da cobaia (C, R ou S): ");
        scanf("%s", &cobaia);
        cobaia[0] = toupper(cobaia[0]);

        printf("Informe a quantidade de cobaias: ");
        scanf("%d", &quantasC);
        ctCobaias += quantasC;

        if(cobaia[0] == 'C'){
            ctc += quantasC;
        }
        else if(cobaia[0] == 'R'){
            ctr += quantasC;
        }
        else if(cobaia[0] == 'S'){
            cts += quantasC;
        }
    }

    printf("\nRelatorio final: \n");
    printf("Total de cobaias: %d", ctCobaias);
    printf("\nTotal de coelhos: %d", ctc);
    printf("\nTotal de ratos: %d", ctr);
    printf("\nTotal de sapos: %d", cts);
}
