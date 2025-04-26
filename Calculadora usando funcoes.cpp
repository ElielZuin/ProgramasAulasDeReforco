#include <stdio.h>
#include <stdlib.h>

//iniciamos as funcoes
void Menu();
void Adicao();
void Subtracao();
void Multiplicacao();
void Divisao();


int main(){
	
	int escolha=1;
	
	do
	{
	Menu();
	
	printf("\n\nDeseja calcular outro valor?");
	printf("\n1- SIM");
	printf("\n0- NAO\n");
	scanf("%d",&escolha);
	}
	while(escolha ==1);
	
	return 0;
}


void Menu(){
	int escolha;
		
	printf("Escolha sua operacao:\n\n");
	printf("1- Adicao\n");
	printf("2- Subtracao\n");
	printf("3- Multiplicacao\n");
	printf("4- Divisao\n");
	printf("\nEscolha: ");
	scanf("%d",&escolha);
	
	switch(escolha){
		case 1:					//case 1: comeca o codigo
			Adicao();						//case é basicamente CASO A ESCOLHA FOR, entao caso a escolha for 1; printe domingo na tela.
			break;				//termina no break;
		case 2:
			Subtracao();
			break;
		case 3:
			Multiplicacao();
			break;
		case 4:
			Divisao();
			break;
		
		default:										//default sera iniciado quando for passado qualquer valor que nao seja 1,2,3,4,5,6,7.
			Menu();
			break;
	}
}

void Adicao(){
	
	int num1,num2,result;
	
	printf("Informe o primeiro numero: ");
	scanf("%d",&num1);
	
	printf("Informe o segundo numero: ");
	scanf("%d",&num2);
	
	result = num1 + num2;
	printf("A soma desses valores eh: %d", result);
}

void Subtracao(){
	int num1,num2,result;
	
	printf("Informe o primeiro numero: ");
	scanf("%d",&num1);
	
	printf("Informe o segundo numero: ");
	scanf("%d",&num2);
	
	result = num1 - num2;
	printf("A subtracao desses valores eh: %d", result);
}

void Multiplicacao(){
	int num1,num2,result;
	
	printf("Informe o primeiro numero: ");
	scanf("%d",&num1);
	
	printf("Informe o segundo numero: ");
	scanf("%d",&num2);
	
	result = num1 * num2;
	printf("O produto desses valores eh: %d", result);
}

void Divisao(){
	float num1,num2,result;
	
	printf("Informe o primeiro numero: ");
	scanf("%f",&num1);
	
	printf("Informe o segundo numero: ");
	scanf("%f",&num2);
	
	result = num1 / num2;
	printf("A divisao desses valores eh: %.1f", result);
}


