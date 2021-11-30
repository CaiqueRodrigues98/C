#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main(){
	int anonasc, anoatual, idade;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite o ano atual: ");
	scanf("%d",&anoatual);
	
	printf("Digite o ano de nascimento: ");
	scanf("%d",&anonasc);
	idade = anoatual - anonasc;
	
	printf("A idade da pessoa é %d anos", idade);
	printf("\n\n");
	system("pause");
	}

