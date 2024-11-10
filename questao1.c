//#include <stdio.h> 

//1. Faça um algoritmo que recebe um número inteiro n, e um vetor de inteiros com n
//posições e retorna a soma dos números lidos percorrendo o vetor.
//ProtóSpo: int SomaElmVetor(int *v, int n)

//int main() {
  //  int n;
 //   printf("Digite um Inteiro:\n");
   // scanf("%d", &n);
 //   int vetor[n];

  //  int tamanha_vetor = sizeof(vetor) / sizeof(vetor[0]);
//
 //   int i = 0;
  //  int cont = 0;

 //   while (i < tamanha_vetor - 1) {
 //       cont += vetor[i] + vetor[i+1];
 //       i++;
 //   }
 //   printf("%d", cont);
 //   return 0;
//}


//int somaElmVetor() {
//}



//1. Faça um algoritmo que recebe um número inteiro n, e um vetor de inteiros com n
//posições e retorna a soma dos números lidos percorrendo o vetor.
//ProtóSpo: int SomaElmVetor(int *v, int n)


#include <stdio.h> 

int SomaElmVetor(int *v, int n) {
    int i = 0;
    int soma = 0;
    while (i < n){
        soma += v[i];
        i++;
    }
    return soma;
}



int main() {
    int vetor[] = {1, 2, 3, 4, 5}; // Exemplo de vetor
    int n = 5; // Número de elementos no vetor

    int resultado = SomaElmVetor(vetor, n);
    printf("A soma dos elementos do vetor é: %d\n", resultado);

    return 0;
}