#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main(){
	float cotacao, dolar, real;
	int menu;
	setlocale(LC_ALL, "Portuguese");
	
	printf("Selecione o tipo de convers�o:\n");
	printf("D�lar para Real [ 1 ]\n");
	printf("Real para D�lar [ 2 ]\n");
	scanf("%d",&menu);
	system("cls");
	
	if (menu == 1){
	
	printf("Digite a cota��o do d�lar: $ ");
	scanf("%f",&cotacao);
	
	printf("Digite o valor em Reais: R$ ");
	scanf("%f",&real);
	
	dolar = cotacao * real;
	printf("O resultado da convers�o � $ %.2f ", dolar);
}else{
	printf("Digite a cota��o do Real: R$ ");
	scanf("%f",&cotacao);
	
	printf("Digite o valor em d�lares: $ ");
	scanf("%f",&dolar);
	
	real = cotacao * dolar;
	printf("O resultado da convers�o � R$ %.2f ", real);	
}
	printf("\n\n");
	system("pause");		
	}

