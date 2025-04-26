#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

//funcao que retorna um valor no main. 2 METODOS DIFERENTES
//adicao = metodo que a propria funcao pede o valor
//multiplicacao = o main tem o valor e vai passar o valor pra funcao calcular	-->	 **programacao paralela - 6semestre

//inicializando as funcoes
int Adicao()
{
	int num1,num2,result;
	
	printf("Informe o primeiro numero: ");
	scanf("%d",&num1);
	
	printf("Informe o segundo numero: ");
	scanf("%d",&num2);
	
	result = num1 + num2;
	printf("A soma desses valores eh: %d", result);
}


//inicializando a funcao porq ela esta apos o main
			
float Multiplicacao(float n1, float n2); /* como vamos passar valor que estao em outra funcao(main) para ele, entao declaramos
										os valores ali como o n1 e n2. Eles precisam ser tipados com o que sao, nesse caso; float
										por isso ficaria float n1, float n2.
										ISSO SO É NECESSARIO PORQUE ESTAMOS PASSANDO A FUNCAO LÁ EM BAIXO!!! SE FOR COMO A DE CIMA, NAO PRECISA INICIAR ELA AQUI DUAS VEZES
										o codigo é lido de cima abaixo linha apos linha, entao se nao declarar aqui para uma funcao la em baixo: da erro.*/
										
main()
{
	float num1, num2,resultado; //declarando as variaveis float da funcao multiplicacao
	
	printf("Vamos calcular a adicao\n");
	Adicao();							//aqui foi chamada a funcao adicao e ela calcula tudo. Apos isso, vem os quebra linha
	printf("\n\n\n\n\n");
	
	printf("Vamos calcular a multiplicacao \n");	//agora vamos calcular a multiplicacao. Os valores sao atribuidos no MAIN e vao ser passados para a funcao
	printf("Informe o primeiro numero: ");
	scanf("%f",&num1);
												//atribuicao de valores as variaveis( num1 , num2 )
	printf("Informe o segundo numero: ");
	scanf("%f",&num2);
	
	resultado = Multiplicacao(num1, num2);	/*Multiplicacao(num1, num2);  -> aqui chamamos a funcao multiplicacao e passamos duas variaveis para a funcao
											isso deve ser na ordem correta que esta declarado la dentro da funcao como Multiplicacao(float n1, float n2)
											o valor num1 aqui equivale ao float n1, o num2 equivale ao float n2. eles DEVEM estar na ordem certa.*/
											
											
	printf("O resultado e: %.2f",resultado);
}
	
float Multiplicacao(float n1, float n2)		//o mesmo paramêtro que passar la em cima (float n1, float n2) tem que passar
{											//de forma identica aqui em baixo.
	float result;							
	
	result = n1 * n2;		//onde é calculado o valor de n1,n2 para a variavel result
	return result;		//aqui retornamos o valor da variavel RESULT. esse retorno vai la no main onde chamamos a funcao
}


