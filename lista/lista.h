
typedef struct _no {
  char valor;
  struct _no *prox;
} No;

typedef struct _lista {
  No *primeiro;
  No *ultimo;

  int quantidade;
} Lista;

Lista *criar_lista();

void liberar_lista(Lista *l);

void Misturar(Lista *l, Lista *a);

int adicionar(Lista *l, char valor);

void imprimir_lista(Lista *l);