#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <locale.h>
//Autor: Antonio Marcos Patricio Castro

struct NO
{
    int valor;
    NO *prox;
};

NO *inicio, *fim;

void LVazia()
{
    inicio = fim = NULL;
} /* LehVazia */

int LehVazia()
{
    return (inicio == NULL);
} /* LehVazia */

int LInsereInicio(int valor)
{
    NO *novo = new NO();
    novo->valor = valor;

    if (LehVazia())
    {
        inicio = fim = novo;
        inicio->prox = NULL;
    }
    else
    {
        novo->prox = inicio;
        inicio = novo;
    }
    return 1;
} /* LInsereInicio */

int LInsereFim(int valor)
{
    NO *novo = new NO();
    novo->valor = valor;
    novo->prox = NULL;
    if (LehVazia())
    {
        //novo->prox = inicio;
        inicio = fim = novo;
        return 1;
    }
    else
    {
        fim->prox = novo;
        fim = novo;
    }
    return 1;
} /* LInsereFim */

int insereNoMeio(int valor, int pos)
{
    NO *novo = new NO();
    novo->valor = valor;
    int cont = 1;
    int cont2 = 0;
    NO *ant = inicio;
    NO *aux;

    if (LehVazia())
    {
        printf("\nLista estava vazia, e o valor foi inserido no inicio.");
        LInsereInicio(valor);
        return 1;
    }
    else
    {
        if (pos == 0)
        {
            LInsereInicio(valor);
            return 1;
        }
        while (ant != NULL)
        {
            if (cont == pos)
            {
                aux = ant->prox;
                ant->prox = novo;
                novo->prox = aux;
                cont2++;
                return 1;
            }
            ant = ant->prox;
            cont++;
        }
    }
    if (cont2 == 0)
    {
        printf("Posição não encontrada na lista.\n valor será inserido no final");
        LInsereFim(valor);
        return 1;
    }
}

int LRemoveInicio()
{
    if (LehVazia())
        printf("\nLista vazia.");
    return 0;

    NO *aux = inicio;
    inicio = aux->prox;
    delete (aux);
    return 1;
} /* LRetiraInicio */

int LRemoveFim()
{
    NO *aux = inicio;
    NO *anterior;
    if (LehVazia())
        printf("\nLista vazia.");
    return 0;

    while (aux != NULL)
    {
        if (aux == fim)
        {
            anterior->prox = NULL;
            fim = anterior;
            delete (aux);
            aux = NULL;
        }
        else
        {
            anterior = aux;
            aux = aux->prox;
        }
    }
    return 1;
} /* LRetiraFim */

int LRemoveMeio(int pos)
{
    NO *aux = inicio->prox;
    NO *ant = inicio;
    int cont2 = 0;
    int cont = 1;

    if (LehVazia())
    {
        printf("\nLista vazia.");
        return 0;
    }
    else if (pos == 0)
    {
        LRemoveInicio();
        return 1;
    }
    else
    {
        while (aux != NULL)
        {
            if (cont == pos)
            {
                ant->prox = aux->prox;
                delete (aux);
                cont2++;
                return 1;
            }
            ant = ant->prox;
            aux = aux->prox;
            cont++;
        }
    }

    if (cont2 == 0)
    {
        printf("Posição não encontrada na lista.\n");
        return 0;
    }
}
// Faz a remoção de todos os elementos da lista iguais ao valor do parâmetro recebido.
int removeValorDaLista(int valor)
{
    NO *aux = inicio;
    NO *ant;
    if (LehVazia())
    {
        printf("\nLista vazia.");
        return 0;
    }

    while (aux != NULL)
    {
        if (aux->valor == valor)
        {
            if (aux == inicio)
            {
                LRemoveInicio();
                aux = inicio;
            }
            else if (aux == fim)
            {
                LRemoveFim();
                aux = NULL;
            }
            else
            {
                ant->prox = aux->prox;
                delete (aux);
                aux = ant->prox;
            }
        }
        else
        {
            ant = aux;
            aux = aux->prox;
        }
    }
    return 1;
}

int raizDosPares()
{ //Questão feita em sala
    NO *aux = inicio;
    if (LehVazia())
        printf("\nLista vazia.");
    else
        while (aux != NULL)
        {
            if (aux->valor % 2 == 0)
            {
                float raiz = sqrt(aux->valor);
                printf("\nRaiz do numero Par %d: %.2f \n", aux->valor, raiz);
            }
            else
            {
                int quadrado = aux->valor * aux->valor;
                printf("\nQuadrado do numero Impar %d: %d \n", aux->valor, quadrado);
            }

            aux = aux->prox;
        }
}
//Questão extra
void realizaSoma_e_Media()
{
    NO *aux = inicio;
    int Somavalores = 0, cont = 0, media = 0;

    if (LehVazia())
    {
        printf("\nLista vazia.");
    }
    else
    {
        while (aux != NULL)
        {
            Somavalores = Somavalores + aux->valor;
            aux = aux->prox;
            cont++;
        }
    }
    media = Somavalores / cont;
    printf("\nSoma dos Valores da Lista: %d \n", Somavalores);
    printf("\nMedia dos Valores da Lista: %d \n", media);
}
//Questão extra
int ContaValoresIguaisDaLista(int valor)
{
    NO *aux = inicio;
    NO *ant;
    int cont = 0;
    if (LehVazia())
    {
        printf("\nLista vazia.");
        return 0;
    }
    else
    {
        while (aux != NULL)
        {
            if (aux->valor == valor)
            {
                cont++;
                aux = aux->prox;
            }
            else
            {
                aux = aux->prox;
            }
        }
    }
    printf("\nO numero %d aprece %d vez(es) na lista\n", valor, cont);
    return 1;
}

void LImprime()
{
    NO *aux = inicio;
    if (LehVazia())
        printf("\nLista vazia.");
    else
        while (aux != NULL)
        {
            printf("\n%d", aux->valor);
            aux = aux->prox;
        }
} /* LImprime */

main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    int opcao, pos, valor;

    do
    {
        system("cls");
        printf("======== OPERAÇÕES EM LISTA ENCADEADA ========\n");
        printf("\n1  - Criar a lista");
        printf("\n2  - Inserir no inicio da lista");
        printf("\n3  - Inserir no meio da lista");
        printf("\n4  - Inserir no fim da lista");
        printf("\n5  - Remove do inicio da lista");
        printf("\n6  - Remove do meio da lista");
        printf("\n7  - Remove um valor da lista (BONUS))");
        printf("\n8  - Remove do fim  da lista");
        printf("\n9  - Imprimir a lista");
        printf("\n10 - Imprime a raiz dos números pares e o quadrado dos Impares da Lista");
        printf("\n11 - Imprimir a soma dos valores da lista e a media da lista");
        printf("\n12 - Imprimir a quantidae dos valores iguais ao digitado, na lista");

        // adicionar uma opçao para realizar uma operaçao definida por voce.
        // implemente a funçao para esta operaçao.

        printf("\n00 - Sair");
        printf("\nDigite uma opção: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("\nOpcao 1: Criando a lista...");
            LVazia();
            printf("\n\nLista criada com sucesso.");
            break;
        case 2:
            printf("\nOpcao 2: Inserir um valor no inicio da lista");
            printf("\nDigite o valor a ser inserido: ");
            scanf("%d", &valor);

            if (LInsereInicio(valor))
            {
                printf("\nValor inserido com sucesso.");
            }
            else
                printf("\nErro ao inserir o valor no inicio da lista.");
            break;
        case 3:
            printf("\nOpcao 3: Inserir um valor no meio da lista");
            printf("\nDigite o valor: ");
            scanf("%d", &valor);

            printf("\nDigite a posicao em que o valor sera inserido na lista: ");
            scanf("%d", &pos);
            if (insereNoMeio(valor, pos - 1))
            {
                printf("\nValor inserido com sucesso.");
            }
            else
                printf("\nErro ao inserir o valor no meio da lista.");
            break;
        case 4:
            printf("\nOpcao 4: Inserir um valor no fim da lista");
            printf("\nDigite o valor a ser inserido: ");
            scanf("%d", &valor);

            if (LInsereFim(valor))
            {
                printf("\nValor inserido com sucesso.");
            }
            else
                printf("\nErro ao inserir o valor no fim da lista.");
            break;
        case 5:
            printf("\nOpcao 5: Remover do inicio da lista");

            if (LRemoveInicio())
            {
                printf("\nValor removido com sucesso.");
            }
            else
                printf("\nErro ao remover o valor do inicio da lista.");
            break;
        case 6:
            printf("\nOpcao 6: Remover do meio da lista");
            printf("\nDigite a posição a ser removida: ");
            scanf("%d", &pos);
            if (LRemoveMeio(pos - 1))
            {
                printf("\nPosição removida com sucesso.");
            }
            else
                printf("\nErro ao remover o a posição da lista.");
            break;
        case 7:
            printf("\nOpcao 6: Remover da lista");
            printf("\nDigite o valor a ser removido: ");
            scanf("%d", &valor);
            if (removeValorDaLista(valor))
            {
                printf("\nValor(es) removido(s) com sucesso.");
            }
            else
                printf("\nErro ao remover o(s) valor(es) da lista.");
            break;
        case 8:
            printf("\nOpcao 7: Remover do fim da lista");

            if (LRemoveFim())
            {
                printf("\nValor removido com sucesso.");
            }
            else
                printf("\nErro ao remover o valor do fim da lista.");
            break;
        case 9:
            printf("\nOpcao 8 selecionada.\nImpressao da Lista.\n");
            LImprime();
            break;
        case 10:
            printf("\nOpcao 9 selecionada.\nImpressao das raiz dos numeros pares e o quadrado dos Impares da Lista.\n");
            raizDosPares();
            break;
        case 11:
            printf("\nOpcao 10 selecionada. \nImpressao da soma dos valores da lista.\n");
            realizaSoma_e_Media();
            break;

        case 12:
            printf("\nOpcao 11 selecionada.");
            printf("\nDigite o valor a ser buscado na lista: ");
            scanf("%d", &valor);
            printf("\nImpressao da quantidade do valor na lista.\n");
            ContaValoresIguaisDaLista(valor);
            break;
        default:
            if (opcao != 00)
                printf("\nOpcao invalida.");
            break;
        }
        printf("\n\n");
        system("PAUSE");
    } while (opcao != 00);
}
