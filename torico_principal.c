////En este archivo voy a copiar lo aprehendido en el primer video teórico de la materia II, en la cual trabajamos el lenguaje C. Este es un lenguaje que ya no se utiliza, pero es la base de muchos lenguajes de programación modernos.
#include <stdio.h>

int main() {
  printf("Hola, mundo!\n");
  int a = 10;
  int b = 20;
  int suma = a + b;
  printf("La suma de %d y %d es %d\n", a, b, suma);
  return 0;
}