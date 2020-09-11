#include <stdio.h>

void mensagem(char * msg);

int main() {
  int valor1, valor2;

  mensagem("informe dois valores inteiros: ") ;
  scanf("%d %d",  &valor1,  &valor2);

  printf("Valores lidos %d e %d\n",  valor1,  valor2);
}

void mensagem(char * msg) {
  printf("%s", msg);
}