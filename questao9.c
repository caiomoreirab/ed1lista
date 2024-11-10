//9. Faça um algoritmo que recebe um vetor de n números reais e uma matriz com m
//linhas e p colunas, de números reais armazenada no vetor vmat, e imprime em
//quais posições da matriz (linha e coluna) o valor é igual a um dos valores do vetor
//(imprime também a posição do vetor).
//ProtóSpo: int CmpVectorMatrix ( int n, int m, int p, float *vet, float *vmat)

void CmpVectorMatrix ( int n, int m, int p, float *vet, float vmat[m][p]){
    for(int i=0; i<m; i++) {
        for(int j=0; j<p; j++) {
            for(int k=0; k<n; k++){
                if(vmat[i][j] == vet[k]){
                    printf("[%d][%d]=%.2f [%d]=%.2f\n", i, j, vmat[i][j], k, vet[k]);
                }
            }
        }
    }
}

#include <stdio.h>
int main() {
    int n = 3, m = 3, p = 3;
    float vet[] = {1.0, 2.0, 3.0};
    float vmat[3][3] = {
        {1.0, 0.0, 3.0},
        {0.0, 2.0, 0.0},
        {3.0, 1.0, 2.0}
    };

    CmpVectorMatrix(n, m, p, vet, vmat);

    return 0;
}