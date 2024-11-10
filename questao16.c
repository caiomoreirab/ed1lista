//16. Faça um algoritmo para receber uma Matriz e retornar:
//-1 – Se não for uma Matriz quadrada;
//0 – Se for um Matriz Quadrada;
//ProtóSpo: int TipodeMatrizQuadrada(int **ma, int n, int m)


int TipodeMatrizQuadrada(int **ma, int n, int m) {
    if (n != m) {
        return -1; // Não é uma matriz quadrada
    }
    return 0; // É uma matriz quadrada
}