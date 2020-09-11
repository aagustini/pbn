#include <stdio.h>

//
//  programa de teste
//

#define MAX 20

void ordenar(int vet[], int tam);
void swap(int *a, int *b);

void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

void ordenar(int vet[], int tam) {
    // algoritmo: selecao direta 
    int *menor;
    int *atual = vet;

    for (int i = 0; i < (tam-1); i++) 
    {
        menor = atual;
        for (int j = (i+1); j < tam; j++) {
            if( *menor > *(vet+j) ) 
                menor = vet+j;
        }
        if ( *atual != *menor ) {
           swap(atual, menor);
        }
        atual++;
    }
}

int main() {
    int nroElem;
    int vet[MAX];

    scanf("%d", &nroElem);
    for (int i = 0; i < nroElem; i++) {
        // permitido usar [] apenas na leitura
        scanf("%d", &vet[i]);
    }

    ordenar(vet, nroElem);

    for (int i = 0; i < nroElem; i++) {
        printf("%d ", *(vet+i));
    }

    return 0;
}

