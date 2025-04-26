#include <stdio.h>
#include <conio.h>
void eliel(); // Inicializando a função. Dando oi, eu existo

main()
{
	printf("Chamando a funcao: \n");
	eliel();	//aqui voce chama a funcao, sem passar valor pois ela é uma func SEM RETORNO.
}


void eliel()	//declarando o conteudo da função
{
	printf("Hello World...\n\n");
	printf("Isso e uma funcao SEM retorno.\n");
}

