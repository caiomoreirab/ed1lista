


//Faca um algoritmo que recebe um vetor de números inteiros e retorna o
//comprimento da sequência consecuSva mais longa existente no vetor.
//ProtóSpo: int MaiorSequenciaConsecuSva(int *v, int n, int p, int q)
#include <stdio.h>  

int MaiorSequenciaConsecuSva(int *v, int n, int p, int q) {
        int sequencia = 1;
        int maiorSequencia = 1;
        for (int i =0; i < n -1; i++) {
            if (v[i + 1] == v[i] +1) {
            sequencia++;
            } else {
            if (sequencia > maiorSequencia) {
                maiorSequencia = sequencia; //passando a sequencia atual como a melhor por enquanto
            }
            sequencia = 1;  //resetando a sequencia
            }
        }
        if (sequencia > maiorSequencia) {
            maiorSequencia = sequencia;
        }
        
        return maiorSequencia;
}





int main() {
    int vetor[] = {1, 2, 5, 4, 5,6, 8, 9, 10, 11 ,12,5 }; // Exemplo de vetor
    int n = 12; // Número de elementos no vetor

    int resultado = MaiorSequenciaConsecuSva(vetor, n,2,3);
    printf("A maior sequencia: %d\n", resultado);

    return 0;
}
