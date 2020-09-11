#include <stdio.h>

int main()
{
    int vet[] = { 4, 9, 12 };
    int i, *ptr;

    ptr = vet;
    int cont = 1;

    // de forma 'isolada' ('sozinho' numa expressão) 
    //      podemos usar pré/pós incremento como se fossem sinônimos
    cont = cont + 1;
    cont += 1;
    cont++;
    ++cont;

    // numa expressão mais complexa, no entanto, temos de entender\
    //      o significado do operador de incremento 
    // caso 1. 
    //      - busca (fetch) o valor de i para ser usado na expressão
    //      - vai na memória e incrementa o valor de i (pós-incremento)
    i = 7;
    printf("(com pós incremento) %d ", 3 * i++);
    printf("%d ", i);

    // caso 2. 
    //      - vai na memória e incrementa o valor de i (pré-incremento)
    //      - busca (fetch) o valor de i para ser usado na expressão
  
    i = 7;
    printf("\n(com pré-incremento) %d ", 3 * ++i);
    printf("%d> ", i);
   
    printf("\n\n");
    for(i =0; i<3; i++) {
        // - busca o valor de ptr para uso na expressão
        // - (pós)incrementa o valor do ponteiro (4 bytes)
        printf("%d ", *ptr++);
        // o mesmo que..
        // printf("%d ", *ptr);
        // ptr = ptr + 1;  // lembrando: + 1+sizeof(int)
    }
    printf("\n");  

    ptr = vet;
    for(i =0; i<3; i++) {
        // - busca o conteúdo apontado por ptr
        // - incrementa o conteúdoo apontado por ptr
        printf("%d ", (*ptr)++);
    }

    printf("\nNeste caso a posição [0] do array que foi incrementada:\n");
    for(i =0; i<3; i++)
        printf("%d ", vet[i]);
    printf("\n");    
    
    return 1;
}