#include <stdio.h>
#include "funciones.h"

void suma(int *suma, int *num1, int *num2){
        *suma= *num1+*num2;
        printf("El valor de la suma es : %d",*suma);
}