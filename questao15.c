//15. Faça um algoritmo para receber uma matriz e retornar:
//0 – Se for um Matriz Quadrada;
//1 – Se for uma Matriz quadrada simétrica;
//2 – Se for uma Matriz quadrada Matriz Diagonal;
//3 – Se é uma Matriz quadrada Assimétrica;
//4 - Se é uma Matriz quadrada Simétrica;

//ProtóSpo: int TipodeMatrizQuadrada(int **ma, int n, int m)

#include <stdio.h>

int TipodeMatriz(int **ma, int n, int m) {
    if (n != m) {
        return 0; // Não é uma matriz quadrada
    }

    int simetrica = 1;
    int diagonal = 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j && ma[i][j] != 0) {
                diagonal = 0; // Se algum elemento fora da diagonal principal não é zero, não é diagonal
            }
            if (ma[i][j] != ma[j][i]) {
                simetrica = 0; // Se A[i][j] != A[j][i], não é simétrica
            }
        }
    }

    if (diagonal) {
        return 2; // Matriz Diagonal
    }
    if (simetrica) {
        return 1; // Matriz Simétrica
    }
    return 3; // Matriz Assimétrica
}
