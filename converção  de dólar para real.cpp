#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main(){
	float cotacao, dolar, real;
	int menu;
	setlocale(LC_ALL, "Portuguese");
	
	printf("Selecione o tipo de conversão:\n");
	printf("Dólar para Real [ 1 ]\n");
	printf("Real para Dólar [ 2 ]\n");
	scanf("%d",&menu);
	system("cls");
	
	if (menu == 1){
	
	printf("Digite a cotação do dólar: $ ");
	scanf("%f",&cotacao);
	
	printf("Digite o valor em Reais: R$ ");
	scanf("%f",&real);
	
	dolar = cotacao * real;
	printf("O resultado da conversão é $ %.2f ", dolar);
}else{
	printf("Digite a cotação do Real: R$ ");
	scanf("%f",&cotacao);
	
	printf("Digite o valor em dólares: $ ");
	scanf("%f",&dolar);
	
	real = cotacao * dolar;
	printf("O resultado da conversão é R$ %.2f ", real);	
}
	printf("\n\n");
	system("pause");		
	}

