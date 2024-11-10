//1. Faça algoritmo que recebe uma matriz ANxMxP(volume), os valores N, M e P e
//preenche no vetor vet:


//a) Os elementos da linha I da faSa K.
//ProtóSpo: int *DevolveVetorLinhaIFaSaK (int *VolA, int *vet, int N, int M, int P, int I, int
//K);


#include <stdio.h>

int* DevolveVetorLinhaIFaSaK(int *VolA, int *vet, int N, int M, int P, int I, int K) {
    // Verificação para garantir que os índices estão dentro dos limites
    if (K >= N || I >= M) {
        printf("Erro: Índice fora dos limites da matriz.\n");
        return NULL;
    }
    
    // Preenchendo o vetor vet com os elementos da linha I da camada K
    for (int j = 0; j < P; j++) {
        vet[j] = VolA[(K * M * P) + (I * P) + j];
    }
    
    return vet;
}





//b) Os elementos da coluna J da faSa K.
//ProtóSpo: int *DevolverVetorColunaJFaSaK (int *VolA, int *vet, int N, int M, int P, int j,
//int K);



int* DevolverVetorColunaJFaSaK(int *VolA, int *vet, int N, int M, int P, int J, int K) {
    // Verificação para garantir que os índices estão dentro dos limites
    if (K >= N || J >= P) {
        printf("Erro: Índice fora dos limites da matriz.\n");
        return NULL;
    }

    // Preenchendo o vetor vet com os elementos da coluna J da camada K
    for (int i = 0; i < M; i++) {
        vet[i] = VolA[(K * M * P) + (i * P) + J];
    }

    return vet;
}






//c) Os elementos da diagonal principal da faSa K.
//ProtóSpo: int *DevolverVetorDiagonalfaSaK (int *VolA, int *vet, int N, int M, int P, int
//K);

int* DevolverVetorDiagonalfaSaK(int *VolA, int *vet, int N, int M, int P, int K) {
    // Verificação para garantir que a camada é quadrada e que o índice K está dentro dos limites
    if (K >= N || M != P) {
        printf("Erro: Índice fora dos limites da matriz ou a camada não é quadrada.\n");
        return NULL;
    }

    // Preenchendo o vetor vet com os elementos da diagonal principal da camada K
    for (int i = 0; i < M; i++) {
        vet[i] = VolA[(K * M * P) + (i * P) + i];
    }

    return vet;
}






//d) Os elementos da linha I de todas as faSas.


int* DevolverVetorLinhaITodasFaSas(int *VolA, int *vet, int N, int M, int P, int I) {
    // Verificação para garantir que o índice da linha está dentro dos limites
    if (I >= M) {
        printf("Erro: Índice da linha fora dos limites da matriz.\n");
        return NULL;
    }

    // Preenchendo o vetor vet com os elementos da linha I de todas as camadas
    for (int k = 0; k < N; k++) {
        for (int j = 0; j < P; j++) {
            vet[k * P + j] = VolA[(k * M * P) + (I * P) + j];
        }
    }

    return vet;
}
