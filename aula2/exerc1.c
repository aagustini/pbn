#include <stdio.h>

//prototipos
void notas(int R, int* n100, int* n50, int* n10, int* n5, int* n1 );

int main(){
    int valor, notas100, n50, n10, n5, n1;

    printf("informe um valor: ");
    scanf("%d", &valor);
    
    notas(valor, &notas100, &n50, &n10, &n5, &n1);
    printf("Notas 100: %d\n", notas100);
    printf("Notas  50: %d\n", n50);
    printf("Notas  10: %d\n", n10);
    printf("Notas   5: %d\n", n5);
    printf("Notas   1: %d\n", n1);

    return 0;
}

void notas(int R, int* n100, int* n50, int* n10, int* n5, int* n1 ) {
// 289 
//   2 * 100
//   1 *  50
//   3 *  10
//   1 *   5
//   4 *   1
    *n100 = R/100;
    *n50  = R%100/50;
    *n10  = R%50/10;
    *n5   = R%10/5;
    *n1   = R%5;

}
