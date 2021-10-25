
//Definir um tamanho máximo para meu vetor
#define T 1

//------------------------------------------------------------

//Criando um ponteiro para evitar um consumo desnecessário de memória
typedef struct Cliente *pcliente;

//Definir o vetor de ponteiro
pcliente vClientes[T];

//------------------------------------------------------------

//Criando um ponteiro para evitar um consumo desnecessário de memória
typedef struct Conta *pconta;

//Definir o vetor de ponteiro
pconta vContas[T];

//------------------------------------------------------------


//Rotina para liberar memória (desalocar os dados das posições do ponteiro) (colocar nulo para todo mundo)
void inicializar();

//Solicitar a leitura de dados do teclado para armazenar em uma região de memória
void ler(int p);

//Solicitar a leitura de dados do teclado para armazenar em uma região de memória
void lerConta(int pc);

//Imprimir os dados de um cliente cujo CPF seja informado.
void imprimir(int cpfInf); //Pesquisa

//Imprimir todos os dados cadastrados
void imprimirTodos();

void verSaldo();

void sacar();

void depositar();
