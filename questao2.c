//Faça um algoritmo que recebe um vetor de inteiros e o número n, representando o
//tamanho do vetor, e retorna:

//a) O maior elemento do vetor.
//ProtóSpo: int MaiorElmVetor(int *v, int n)

int MaiorElmVetor(int *v, int n) {
    int i = 0;
    int maior = v[0];
    for (i = 0; i < n ; i++ ) {
        if (v[i] > maior){
            maior = v[i];
        }
    }
    return maior;
}



int main() {
    int vetor[] = {1, 2, 13, 4, 9}; // Exemplo de vetor
    int n = 5; // Número de elementos no vetor

    int resultado = MaiorElmVetor(vetor, n);
    printf("A soma dos elementos do vetor é: %d\n", resultado);

    return 0;
}
















//b) A soma dos números no vetor;
//ProtóSpo: int SomaElmsVetor(int *v, int n)

//c) O elemento na posição N/2.
//ProtóSpo: int ElmDoMeioVetor(int *v, int n)

