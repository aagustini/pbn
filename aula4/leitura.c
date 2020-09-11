#include <stdio.h>

//
//  componentes do grupo;
//      - nome1
//      - nome2
//      - nome3
//

#define MAX 100

int main() {
    int valorPesq, nroElem;
    int vet[MAX];

    scanf("%d", &valorPesq);
    scanf("%d", &nroElem);
    for (int i = 0; i < nroElem; i++) {
        // permitido usar [] apenas na leitura
        scanf("%d", &vet[i]);
    }

    // lembrar de apagar esta parte depois. 
    // apenas para testar a leitura
    printf("valores lidos:\n");
    printf("%d\n", valorPesq);
    printf("%d\n", nroElem);
    for (int i = 0; i < nroElem; i++) {
        // permitido usar [] apenas na leitura
        // e aqui para testar
        printf("%d ", vet[i]);
    }

    // leu certo? seu código aqui...


    return 0;
}

