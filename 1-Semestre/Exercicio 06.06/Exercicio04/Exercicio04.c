#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float CalculaPesoIdeal(float altura,char sexo);

int main(int argc, char *argv[]) {
	
	float altura=0;
	char sexo;
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("Digite sua altura\n");
	scanf("%f",&altura);
	do{
		printf("Digite o seu sexo\nM-Masculino             F-Feminino\n");
		scanf(" %c",&sexo);
	}while(sexo!='M'&&sexo!='m'&&sexo!='F'&&sexo!='f');
	
	printf("O seu peso ideal é %.2f",CalculaPesoIdeal(altura,sexo));	
	
	return 0;
}
float CalculaPesoIdeal(float altura,char sexo){
	
	if(sexo=='M'||sexo=='m')
		return 72.7*altura-58;
		
	if(sexo=='F'||sexo=='f')
		return 62.1*altura-44.7;
	
}
