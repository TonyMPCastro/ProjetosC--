
#include <stdio.h>
#include "lista.h"

int main(void) {
  int x;
  char v;
  Lista *l,*a;

  l = criar_lista();
  a = criar_lista();


  adicionar(l, 'M');
  adicionar(l, 'I');
  adicionar(l, 'N');
  adicionar(l, 'H');
  adicionar(l, 'A');
   



  imprimir_lista(l);

  adicionar(a, 'l');
  adicionar(a, 'i');
  adicionar(a, 's');
  adicionar(a, 't');
  adicionar(a, 'a');



  imprimir_lista(a);

    Misturar(l,a);

  liberar_lista(l);
  liberar_lista(a);


  return 0;
}