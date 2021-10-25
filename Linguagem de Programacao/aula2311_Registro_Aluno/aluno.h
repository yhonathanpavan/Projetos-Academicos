//Definir um tamanho maximo para o meu vetor
#define T 100

//Criando um ponteiro para evitar consumo desnecessario de memoria
typedef struct Aluno *paluno;

//Definir o vetor de ponteiro
paluno vAlunos[T];

//Rotina para liberar memoria (desalocar os dados das posicoes do ponteiro)
void inicializar();

//Solicita a leitura de dados do teclado para armazenar em uma regiao
//de memoria
void ler(int p);

//Imprimir os dados um aluno cujo ra seja informado
void imprimir(int raInf);

//Imprimir todos os dados cadastrados
void imprimirTodos();

