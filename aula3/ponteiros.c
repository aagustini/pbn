#include <stdio.h>

int main()
{
    int b = 7;
 
    // pi é um ponteiro para um inteiro 
    //   - armazena um endereço de memória (de um inteiro)
    // uma boa prática de programação é 
    //    - sempre inicializar os ponteiros com NULL
    int* pi = NULL;

    //  armazena o endereço de b em pi
    pi = &b;

    // mostra endereço de b e o valor de b
    printf("(%p) %d\n", &b, b);

    // mostra: 
    //   - endereço de pi
    //   - valor armazenado em pi (endereço de b)
    //   - conteúdo apontado por pi  
    printf("(%p) %p %d\n", &pi, pi, *pi);
  
}