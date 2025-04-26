#include <stdio.h>
#include <math.h>

int main() {
    double numero, raiz;
    
    printf("Digite um n�mero: ");
    scanf("%lf", &numero);
    
    if (numero < 0) {
        printf("N�o � poss�vel calcular a raiz quadrada de um n�mero negativo.\n");
    } else {
        raiz = sqrt(numero);
        printf("A raiz quadrada de %.2lf � %.2lf\n", numero, raiz);
    }
    
    return 0;
} 
