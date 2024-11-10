//23. Faça um algoritmo para receber uma Matriz e retornar o vetor vet com os
//elementos da coluna “p” da matriz
//ProtóSpo: int * colunadaMatriz(int **ma, int *vet, int n, int m, int p)




// Função que retorna um vetor com os elementos da coluna 'p' da matriz
int *colunadaMatriz(int **ma, int *vet, int n, int m, int p) {
    // Verifica se a coluna 'p' é válida
    if (p < 0 || p >= m) {
        printf("Erro: coluna fora do intervalo.\n");
        return NULL;
    }

    // Alocação do vetor para armazenar os elementos da coluna 'p'
    vet = (int *)malloc(n * sizeof(int));
    if (vet == NULL) {
        printf("Erro na alocação de memória.\n");
        return NULL;
    }

    // Copia os elementos da coluna 'p' para o vetor
    for (int i = 0; i < n; i++) {
        vet[i] = ma[i][p];
    }

    return vet;
}

