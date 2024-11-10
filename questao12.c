
//12. Faça um algoritmo para receber a matriz Anxm(vma), os inteiros n e m, e retornar
//na matriz vmb a transposta da Matriz A.
//ProtóSpo: int *transposta(int **vma, int **vmb, int n, int m)




int *transposta(int **vma, int **vmb, int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            vmb[j][i] = vma[i][j];
        }
    }
    return (int *)vmb;
}