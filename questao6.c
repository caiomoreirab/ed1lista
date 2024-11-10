

//6. Fazer um algoritmo que recebe um número N, e um vetor de inteiros com n
//posições do vetor, e retorna:


//a) o maior valor do vetor;
//ProtóSpo: int ImprimeMaiorValor (int n, int *v);

#include <stdio.h>


int ImprimeMaiorValor (int n, int *v) {
    int maiorValor = v[0] ;
    for (int i= 1; i < n;i++) {
        if(v[i] > maiorValor) {
        maiorValor = v[i];
        }
    }
    return maiorValor;
    
}


int main() {
    int vetor[] = {1, 2, 5, 4, 5,6, 8, 9, 10, 11 ,12,5 }; // Exemplo de vetor
    int n = 12; // Número de elementos no vetor

    int resultado = ImprimeMaiorValor(n, vetor);
    printf("O maior Valor: %d\n", resultado);

    return 0;
}





//b) a soma dos números;
//ProtóSpo: int ImprimeSomaDosNumeros (int n, int *v);

int ImprimeSomaDosNumeros(int *v, int n) {
    int i = 0;
    int soma = 0;
    while (i < n){
        soma += v[i];
        i++;
    }
    return soma;
}



//c) o elemento da posição teto (n/2)
//ProtóSpo: int ImprimeElementoDoMeio (int n, int *v);

int ImprimeElementoDoMeio (int n, int *v) {
    int posiTeto = ((n+1) / 2);
    return v[posiTeto];
}
