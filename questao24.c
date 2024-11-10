//24. Faça um algoritmo para receber uma Matriz e retornar o vetor vet com os
//elementos da diagonal principal da matriz
//ProtóSpo: int * diagonaldaMatriz(int **ma, int *vet, int n, int m)


// Função para retornar um vetor com os elementos da diagonal principal da matriz
int *diagonaldaMatriz(int **ma, int *vet, int n, int m) {
    // Verifica se a matriz é quadrada
    if (n != m) {
        printf("Erro: a matriz não é quadrada.\n");
        return NULL;
    }

    // Aloca o vetor para armazenar os elementos da diagonal principal
    vet = (int *)malloc(n * sizeof(int));
    if (vet == NULL) {
        printf("Erro na alocação de memória.\n");
        return NULL;
    }

    // Copia os elementos da diagonal principal para o vetor
    for (int i = 0; i < n; i++) {
        vet[i] = ma[i][i];
    }

    return vet;
}
