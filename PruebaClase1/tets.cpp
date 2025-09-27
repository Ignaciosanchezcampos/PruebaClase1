/*
 * tets.cpp
 *
 *  Created on: 27 sept 2025
 *      Author: LENOVO
 */

#include <gtest/gtest.h>
#include <cstdio>

int suma (int arg1, int arg2);

TEST(suma, funcional){

   int arg1=20;
   int arg2=50;

   int modelo_de_oro=arg1+arg2;

   ASSERT_EQ(modelo_de_oro, suma(arg1,arg2));
}
