/*
 * PruebaClase1.cpp
 *
 *  Created on: 27 sept 2025
 *      Author: LENOVO
 */


#include <stdio.h>
#include <stdlib.h>

int suma(int arg1, int arg2){
    return arg1 + arg2;
}

int main(int narg, char *arg[]){
    int dat1 = 50;
    int dat2 = 200;
    int res;

    if(narg > 1){
        dat1 = atoi(arg[1]); // corregido
    }

    if(narg > 2){
        dat2 = atoi(arg[2]);
    }

    res = suma(dat1, dat2); // corregido

    printf("Sumando %d con %d el resultado es %d\n", dat1, dat2, res);

    return 0;
}
