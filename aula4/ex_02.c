#include <stdio.h>

//
//  programa de teste
//

#define MAX 10

void copiar(int v[], int novo[], int tam);

void copiar(int v[],  int novo[], int tam){   
    for (int i =0 ; i<tam; i++) {
        *(novo+i) = *(v+i);
    }
}


int main() {
    int nroElem;
    int vet[MAX];
    int copia[MAX];

    scanf("%d", &nroElem);
    for (int i = 0; i < nroElem; i++) {
        // permitido usar [] apenas na leitura
        scanf("%d", &vet[i]);
    }

    copiar(vet, copia, nroElem);

    for (int i = 0; i < nroElem; i++) {
        printf("%d ", *(copia+i));
    }


    return 0;
}

