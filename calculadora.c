#include <stdio.h>
#include "funciones.h"
int main (int argc, char *argv[]) {
    int x;
    int *sum=&x;
    int a=10, b=10;
    int *num1=&a, *num2=&b;
    suma(sum,num1,num2);
    prinf("El valor de la suma es: %d\n",*sum);

    return 0;
}