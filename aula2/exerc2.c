#include <stdio.h>

//prototipos
void hms(int T, int* h, int* m, int* s );

void hms(int T, int* h, int* m,int* s ){
    *h = T/3600;         //5h32m23s  == 5*60*60h + 32*60 + 23
    *m = T%3600/60;
    *s = T%3600%60;

}

int main(){
    int tSegundos, horas, minutos, segundos;

    printf("informe numero de segundos: ");
    scanf("%d", &tSegundos);
    
    hms(tSegundos, &horas, &minutos, &segundos);
    printf("%3d hora%c\n", horas, horas==1?' ':'s');
    printf("%3d minutos\n", minutos);
    printf("%3d segundos\n", segundos);
  
    return 0;
}


