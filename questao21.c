// Faça um algoritmo para receber uma Matriz e retornar a matriz vmc com o
//resultado da mulSplicação de A por At (sua transposta) ou NULL caso a
//mulSplicação não seja possível:


//a-usando memória adicional (sem copiar a matriz A para uma outra matriz com sua
//versão transposta);
//ProtóSpo: int *mulSplicaPelaTranspostaA(int **ma, int **vmc, int n, int m)


int *mulSplicaPelaTranspostaA(int **ma, int **vmc, int n, int m) {
    // Verifica se a matriz é válida para a multiplicação com sua transposta
    if (n <= 0 || m <= 0) {
        return NULL;
    }

    // Calcula o produto A * At e armazena o resultado em vmc
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            vmc[i][j] = 0;
            for (int k = 0; k < m; k++) {
                vmc[i][j] += ma[i][k] * ma[j][k];
            }
        }
    }

    return (int *)vmc;
}



//b-sem usar memória adicional (copiando a matriz A para uma outra matriz com sua
//versão transposta);;
//ProtóSpo: int *mulSplicaPelaTranspostaB(int **ma, int **vmc, int n, int m)

int *mulSplicaPelaTranspostaB(int **ma, int **vmc, int n, int m) {
    // Verifica se a matriz é válida para a multiplicação com sua transposta
    if (n <= 0 || m <= 0) {
        return NULL;
    }

    // Calcula o produto A * At diretamente em vmc
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            vmc[i][j] = 0;
            for (int k = 0; k < m; k++) {
                vmc[i][j] += ma[i][k] * ma[j][k];
            }
        }
    }

    return (int *)vmc;
}