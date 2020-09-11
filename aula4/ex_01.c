#include <stdio.h>

//
//  programa de teste
//

#define MAX 100

int pesquisar(int *v, int tam, int val);

int pesquisar(int *v, int tam, int val) {
    for(int i = 0;i<tam;i++) {
        if ( *(v+i) == val)
            return i;
    }
    return -1;
}


int main() {
    int valorPesq, nroElem;
    int vet[MAX];

    scanf("%d", &valorPesq);
    scanf("%d", &nroElem);
    for (int i = 0; i < nroElem; i++) {
        // permitido usar [] apenas na leitura
        scanf("%d", &vet[i]);
    }

    printf("%d", pesquisar(vet, nroElem, valorPesq));

    return 0;
}

