//17. Faça um algoritmo para receber uma Matriz e retornar:
//-1– Se não for uma Matriz quadrada;
//0 – Se for um Matriz Quadrada;
//1 – Se for uma Matriz quadrada simétrica;
//ProtóSpo: int TipodeMatrizSimétrica(int **ma, int n, int m)


#include <stdio.h>

int TipodeMatrizSimétrica(int **ma, int n, int m) {
    if (n != m) {
        return -1; // Não é uma matriz quadrada
    }

    // Verifica se a matriz é simétrica
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (ma[i][j] != ma[j][i]) {
                return 0; // É uma matriz quadrada, mas não é simétrica
            }
        }
    }

    return 1; // É uma matriz quadrada simétrica
}