#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


main(){

	short escolha;	//SHORT é o mesmo que INT. mas com menos memoria, como vamos usar de 1 a 7 apenas, não ha necessidade de usar int. mas INT tbm funcionaria.
		
	printf("Switch case\n");
	printf("Digite um numero de 1 a 7 para ser referencia dos dias da semana.\n");
	scanf("%d",&escolha);
	
	switch(escolha)
	{
		case 1:					//case 1: comeca o codigo
			printf("Domingo");						//case é basicamente CASO A ESCOLHA FOR, entao caso a escolha for 1; printe domingo na tela.
			break;				//termina no break;
		case 2:
			printf("Segunda");
			break;
		case 3:
			printf("Terca");
			break;
		case 4:
			printf("Quarta");
			break;
		case 5:
			printf("Quinta");
			break;
		case 6:
			printf("Sexta");
			break;	
		case 7:
			printf("Sabado");
			break;
		
		default:										//default sera iniciado quando for passado qualquer valor que nao seja 1,2,3,4,5,6,7.
			printf("Valor invalido, tente novamente!");
			break;
	}

}
