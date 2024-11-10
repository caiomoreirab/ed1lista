//8. Faça um algoritmo que recebe dois números inteiros n e m, e uma matriz de float
//com n linhas e m colunas m, e retorna a soma dos números da diagonal principal (
//elementos aij nos quias i é igual a j)
//ProtóSpo: int SomaElmVetor(int *v, int n, int m)

float SomaElmVetor(float* v, int n, int m) {
    float soma = 0;
    for (int i = 0; i < n && i < m; i++) {
        soma += v[i * m + i]; 
    }
    return soma;
}

#include <stdio.h> 
int main() {
    int n = 3, m = 3; // Exemplo de matriz 3x3
    float matriz[] = {1.0, 0.0, 0.0,
                      0.0, 2.0, 0.0,
                      0.0, 0.0, 3.0};

    float soma = SomaElmVetor(matriz, n, m);
    printf("A soma da diagonal principal é: %.2f\n", soma);
    return 0;
}