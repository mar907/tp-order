#!/bin/bash

## Compilo código objeto
g++ -Wall -std=c++11 -c ../src/Customer.cpp -o Customer.o -I../include

g++ -Wall -std=c++11 -c CustomerUnitTest.cpp -o CustomerUnitTest.o \
-I../include -I../include/vendors/catch

## Compilo el Binario
g++ -Wall -std=c++11 Customer.o CustomerUnitTest.o -o CustomerUnitTest.bin

## Permisos de Ejecución para el binario
chmod +x ./CustomerUnitTest.bin

## Limpio los códigos objeto
rm ./*.o

## Ejecuto el binario:
./CustomerUnitTest.bin