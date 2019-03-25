#define MAX 6

 /**************************************
                
                EXERCICIO 16
                
    ***************************************/
void mostrar(int m[][MAX], int linesize) {
    int i, j;
    for(i = 0; i < linesize; i++) {
        printf("[");
        for(j = 0; j < linesize; j++) {
            if ( j > 0 ) {
                printf(", ");
            }
            printf("%2d", m[i][j]);
        }
        printf("]\n");
    }
}

/**
 resolucao do problema
 */
void modificar(int m[][MAX], int linesize) {
    int i, j;
    int valor;
    // percorrendo a matriz 
    for(i = 0; i < MAX; i++) {
        valor = m[i][i];
        for(j = 0; j < MAX; j++) {
            m[i][j] = m[i][j] * valor;
        }
    }
}

void dummy(int M[][MAX], int linesize) {
    
    srand(time(NULL));   // Initialization, should only be called once.
    
    int i, j;
    for(i = 0; i < linesize; i++) {
        for(j = 0; j < linesize; j++) {
            M[i][j] = rand() % 10;       // dados aleatorios entre 0 e 10
        }
    }
}

int main() {
    
    // definicao da matriz A, e inclusao de dados de teste
    int A[MAX][MAX];
    
    // gerando dados de teste para a matriz (uso somente em tempo de desenvolvimento)
    dummy(A, MAX);
    
    printf("Conteudo da matriz original:\n");
    mostrar(A, MAX);
    
    modificar(A, MAX);
    
    printf("\n\n\nConteudo da matriz modificada:\n");
    mostrar(A, MAX);
    
    return 0;
}
