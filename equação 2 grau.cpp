#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

int main (){
	double a, b, c;
	setlocale(LC_ALL,"Portuguese");
	
	printf("Digite a vari�vel A: ");
	scanf("%lf", &a);
	
	printf("Digite a vari�vel B: ");
	scanf("%lf", &b);
	
	printf("Digite a vari�vel C: ");
	scanf("%lf", &c);
	
	double delta = pow(b,2) - 4 * a * c;
        double x1 = (-b + sqrt(delta)) / (2 * a);
	double x2 = (-b - sqrt(delta)) / (2 * a);

	printf("Delta = %.2lf\n",delta);
	printf("X1    = %.2lf\n",x1);
	printf("X2    = %.2lf\n",x2);
	  
	printf("\n\n");
	system("pause");
	
   }

