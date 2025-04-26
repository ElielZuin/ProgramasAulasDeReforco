#include <stdio.h>
#include <math.h>

int main() {
    double numero, raiz;
    
    printf("Digite um número: ");
    scanf("%lf", &numero);
    
    if (numero < 0) {
        printf("Não é possível calcular a raiz quadrada de um número negativo.\n");
    } else {
        raiz = sqrt(numero);
        printf("A raiz quadrada de %.2lf é %.2lf\n", numero, raiz);
    }
    
    return 0;
} 
