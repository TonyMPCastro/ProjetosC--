#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

typedef enum {CAVALEIRO, BARBARO} Classe;


struct NO{
	char iten[20];
	NO *prox;
};

typedef struct _Personagem {
  char nome[200];
  int nivel;
  int x;
  int y;
  Classe classe_P;
  double Q_Dinheiro;
  int forca;
  int inteligencia;
  int sabedoria;
  int destreza;
  int constituicao;
  int carisma;
} Personagem;

NO *fim , *inicio;

Personagem * criar_p( char nomeP[200], int nivelP, int xP, int yP, Classe classe_Per, double Q_DinheiroP, int forcaP, int inteligenciaP, int sabedoriaP, int destrezaP, int constituicaoP, int carismaP) {

  Personagem *p;
  p = malloc(sizeof(Personagem));

  strcpy(p->nome, nomeP);
  p->nivel = nivelP;
  p->x = xP;
  p->classe_P = classe_Per;
  p->Q_Dinheiro = Q_DinheiroP;
  p->forca = forcaP;
  p->inteligencia = inteligenciaP;
  p->sabedoria = sabedoriaP;
  p->destreza = destrezaP;
  p->constituicao = constituicaoP;
  p->carisma = carismaP;
  return p;
}

void imprimir_P(Personagem *p) {
  printf("     Pesonagem:     \n");
  printf("Nome: %s\n", p->nome);
  printf("Nivel: %i\n", p->nivel);
  printf("Classe: %i\n", p->classe_P);
  printf("Dinheiro: %.2f\n", p->Q_Dinheiro);
  printf("Forca: %i\n", p->forca);
  printf("Inteligencia: %i\n", p->inteligencia);
  printf("Sabedoria: %i\n", p->sabedoria);
  printf("Destreza: %i\n", p->destreza);
  printf("Constituicao: %i\n", p->constituicao);
  printf("Carisma: %i\n", p->carisma);

}//Criar Personagem

void aumentarN_P(Personagem *p, int mais){
  p->nivel += mais;
}// aumentar nivel

void defDinheiro_P(Personagem *p, double v){
  p->Q_Dinheiro += v;
}//Define Dinheiro

void move_P(Personagem *p,int vX, int vY){
  p->x += vX;
  p->y += vY;
  printf("Nova Posicao: [%d] [%d]",p->x,p->y);
}

NO * criar_M(Itens i){
  inicio = fim = NULL;
}

void  inserirNO(NO *M,char itenI[20]){
  if(contar(M) < 10){
    M->iten = itenI;
    M->prox = NULL;
		fim->prox = M;
		fim = M;
	}
}

void imprimir_M(NO *M){
		do{
			printf("\n%d",M->iten);
			M = M->prox;
}while(M->prox != NULL);
}

int contar(NO *M){
  int i = 1;
  while(M->prox != NULL){
      i++;
			M = M->prox;
  }
return i;
}

void destruir_P(Personagem *p) {
  free(p);
}//Destroi Personagem

void destruir_M(NO *M) {
  free(M);
}//DestroiP NO
int main(void) {
  Personagem *p1;
  NO *m1;

  p1 = criar_p("Thanos", 100, 0 , 0, BARBARO, 0, 8080, 8020, 8010, 8010, 8009, 8007) ;
  m1 = criar_M("Mapa");

  printf("\n Quantidade Dinheiro\n");
  defDinheiro_P(p1,10.2);
  imprimir_P(p1);

  printf("\n Aumentar Nivel de Poder\n");
  aumentarN_P(p1,10);
  imprimir_P(p1);

   printf("\n \n\n");
  move_P(p1, 1, 0);

  printf("\n \n\n");
  move_P(p1, 1, 0);

  destruir_P(p1);
return 0;
}
