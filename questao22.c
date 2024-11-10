//22. Faça um algoritmo para receber uma Matriz e retornar o vetor vet com os
//elementos da linha l da matriz A
//ProtóSpo: int * linhadaMatriz(int **ma, int *vet, int n, int m, int l)



int classificarMatriz(int matriz[][10], int n) {
    int simetrica = 1;   // Presume que é simétrica até provar o contrário
    int diagonal = 1;    // Presume que é diagonal até provar o contrário

    // Verifica simetria e diagonalidade
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matriz[i][j] != matriz[j][i]) {
                simetrica = 0; // Não é simétrica
            }
            if (i != j && matriz[i][j] != 0) {
                diagonal = 0; // Não é diagonal
            }
        }
    }

    // Retorna o código apropriado com base nas condições
    if (simetrica && diagonal) {
        return 2; // Matriz Diagonal
    } else if (simetrica) {
        return 1; // Matriz Simétrica
    } else {
        return 3; // Matriz Assimétrica
    }
}