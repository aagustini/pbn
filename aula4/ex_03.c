#include <stdio.h>

//
//  programa de teste
//

#define MAX 10

void inverter(int v[], int tam);

void inverter(int v[], int tam){   
    int t;
    int *ini = v;
    int *fim = v+tam-1;

    for (int i =0 ; i<tam/2; i++) {
        t = *ini;
        *ini = *fim;
        *fim = t;

        ini++;
        fim--;
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

    inverter(vet, nroElem);

    for (int i = 0; i < nroElem; i++) {
        printf("%d ", *(vet+i));
    }


    return 0;
}

