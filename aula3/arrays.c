#include <stdio.h>
#include <math.h>

// define uma 'macro'(assim tipo uma constante) TAM com valor 5 
#define TAM 5

// protótipos
void quadrados(double v[]);

int main()
{
    double vet[] = { 3, 5, 7, 9, 11 };
    int i;
 
    // pi é um apontador para um double
    double* pi = NULL;

    // pi recebe o endereço do primeiro elemento de vet
    pi = &vet[0];

    // arrays são sempre um apontador para o primeiro elemento
    // podemos, então escrever (mesmo resultado):
    //     vet não tem o & pois já é um apontador   
    pi = vet;

    // escreve os valores do array usando aritmética de ponteiros
    //      ao somar '1' ao ponteiro estamos somando o número de 
    //      byes do tipo apontado, neste caso o sizeof(double)
    for(i =0; i<TAM; i++)
        //  escreve
        //      - endereço de memória apontado por pi
        //      - índice no vetor
        //      - conteúdo apontado (*) por (pi+i)
        //          - em bytes.. pi + i*sizeof(double) 
        printf("(%p) [%d] %f \n", pi+i, i, *(pi+i));

    printf("\n\n");
    
    char str[TAM] = {'A', 'B', 'C', 'D', 'E'};
    
    char* c = &str[0];

    // como c é um ponteiro para char
    //   *(c+i) é, em bytes, o valor apontado por c+i*sizeof(char)
    for(i =0; i<TAM; i++)
        printf("(%p) [%d] %c\n", c+i, i, *(c+i));
    
    // como arryays são sempre apontadores para o primeiro elemento
    //      são sempre passados por referência

    quadrados(vet);
    // array foi alterado na função 'por refência'
    printf("\nArray foi alterado na função quadrado...\n");
    for (i=0;i<TAM;i++) {
         printf("[%d] %f\n", i, vet[i]);
    }

    return 1;
}

void quadrados(double* v) {
// o mesmo que 
//    void quadrados(double v[]) {
    for (int i=0;i<TAM;i++) {
         v[i] = pow(v[i], 2);
    }
}





  
