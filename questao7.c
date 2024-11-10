




//Fazer um algoritmo que recebe dois números inteiros N e M, e dois vetores A e B
//com com n e m posições respecSvamente, preenche o vetor C (tamanho igual ao
//maior entre N e M):


//a) C é o resultado da união do vetor A com o vetor B;
//ProtóSpo: int UniaoVetores(int *a, int *b, int *c, int n)

int UniaoVetores(int *a, int *b, int *c, int n, int m) {
    for (int i = 0; i < n; i++) {
        c[i] = a[i];
    }
    for (int j = 0; j < m; j++){
            c[n+j] = b[j];
        }
    }
    return c;
}





//b) C é o resultado da interseção do vetor A com o vetor B
//ProtóSpo: int InterseçãoVetores(int *a, int *b, int *c, int n)

int InterseçãoVetores(int *a, int *b, int *c, int n) {
    for (int i=0; i < n; i++) {
        c[i] = a[i];
    }
    int tamanhoC = sizeof(c) / sizeof(c[0]);
    for (int j= 0; j < m; j++) {
        if (b[i] == c[i]) {
            c[tamanhoC + 1] = b[j];
        }
    }
    
}
