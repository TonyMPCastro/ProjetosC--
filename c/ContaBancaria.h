// TAD: ContaBancaria

// VALORES
 enum TipoConta{CORRENTE, POUPANCA} ;

typedef struct _ContaBancaria {
  char numero_conta[20];
  char agencia[20];
  TipoConta tipo_conta;
  double saldo;
} ContaBancaria;

// OPERA��ES
void inicializar_conta(ContaBancaria *conta, char nc[20], char ag[20], TipoConta tc, double s);

void depositar(ContaBancaria *conta, double valor);

void sacar(ContaBancaria *conta, double valor);

void imprimir_saldo(ContaBancaria *conta);

void transferir (ContaBancaria *conta_origem, ContaBancaria *conta_destino, double valor);
