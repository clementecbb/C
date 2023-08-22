#include <stdio.h>

int multi(int a, int b) { return a * b; }

char info(resultado) {
  if (resultado > 5) {
    return printf("mayor que 5");
  } else {
    return printf("menor a 5");
  }
}

int main(void) {
  printf("Cargando ...\n....\n");
  int resultado = multi(5, 2);
  char ult_resultado = info(resultado);
  return 0;
}
