#include <stdio.h>

int testePoint(int *ponteiroTeste1) {
    *ponteiroTeste1 = 2;
}

int main() {

int teste1 = 50;
int teste2= 12;


//Declarando 
int *ponteiroTeste1 = &teste1;

//Referenciando 
printf("%d", *ponteiroTeste1); 

*ponteiroTeste1 = 0;

printf("%d", *ponteiroTeste1);
 
printf("%d", 3);

    return 0;
}

