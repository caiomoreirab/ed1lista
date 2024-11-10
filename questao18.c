//18. Faça um algoritmo para receber uma Matriz e retornar:
//-1– Se não for uma Matriz quadrada;
//0 – Se for um Matriz Quadrada;
//1 – Se for uma Matriz quadrada Matriz Diagonal;
//ProtóSpo: int TipodeMatrizDiagonal(int **ma, int n, int m)

#include <stdio.h>

int TipodeMatrizDiagonal(int **ma, int n, int m) {
    if (n != m) {
        return -1; // Não é uma matriz quadrada
    }

    // Verifica se a matriz é diagonal
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j && ma[i][j] != 0) {
                return 0; // É uma matriz quadrada, mas não é diagonal
            }
        }
    }

    return 1; // É uma matriz quadrada e diagonal
}

