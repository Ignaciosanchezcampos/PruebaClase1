/*
 * PruebaClase1.cpp
 *
 *  Created on: 27 sept 2025
 *      Author: LENOVO
 */

#include <iostream>
#include <cstdlib> // para std::atoi

int suma(int arg1, int arg2) {
    return arg1 + arg2;
}

int main(int narg, char *arg[]) {
    int dat1 = 50;
    int dat2 = 200;
    int res;

    if (narg > 1) {
        dat1 = std::atoi(arg[1]);
    }

    if (narg > 2) {
        dat2 = std::atoi(arg[2]);
    }

    res = suma(dat1, dat2);

    std::cout << "Sumando " << dat1 << " con " << dat2
              << " el resultado es " << res << std::endl;

    return 0;
}

