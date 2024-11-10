//Faça um algoritmo que recebe os inteiros n, m, p e q, e três matrizes ma, mb e mc.
//O algoritmo preenche na matriz mc o produto entre as duas matrizes ma e mb se
//ele for possível, retornando TRUE e retornando falso caso contrário.
//ProtóSpo: int MultMatrixArmazenadaVetor ( int n, int m, int p, int q, float *vma,
//float *vmb, float *vmc)


int MultMatrixArmazenadaVetor(int n, int m, int p, int q, float ma[][m], float mb[][q], float mc[][q]) {
    int possivel = 0; // define como 0 (não possível)
    if (m == p) {
        possivel = 1; // define como 1 (possível) se as dimensões são compatíveis
    } else {
        return possivel; // retorna 0 se a multiplicação não é possível
    }

    // Laço de multiplicação das matrizes
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < q; j++) {
            mc[i][j] = 0; // inicializa o elemento de saída
            for (int k = 0; k < m; k++) {
                mc[i][j] += ma[i][k] * mb[k][j]; // realiza a multiplicação e acumula no resultado
            }
        }
    }
    return possivel;
}
