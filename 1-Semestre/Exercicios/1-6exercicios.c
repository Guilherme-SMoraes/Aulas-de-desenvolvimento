#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//Esses exerc�cios foram feitos pela seguinte dupla:
	//Guilherme dos Santos Moraes
	//Larissa da Silva Oliveira
	
	
	
	
	/*
	int n1=0, antecessor=0;
	printf("Digite um n�mero \n");
	scanf("%d", &n1);
	antecessor=n1-1;
	printf("O antecessor do n�mero digitado �: %d", antecessor);
	
	
	float base=0, altura=0, area=0;
	printf("Digite a base do ret�ngulo \n");
	scanf("%f", &base);
	printf("Digite a altura do ret�ngulo \n");
	scanf("%f", &altura);
	area=base*altura;
	printf("A �rea do retangulo �: %.2f", area);
	
	
	
	int idade=0,  mes=0, dia=0, idade_dias=0;
	printf("Digite a sua idade \n");
	scanf("%d", &idade);
	printf("Digite o m�s atual \n");
	scanf("%d", &mes);
	printf("Digite o dia atual \n");
	scanf("%d", &dia);
	idade_dias=((idade*365)+(mes*30)+dia);
	printf("Sua idade expressa em dias �: %d", idade_dias);
	
	
	
	float custoFabrica=0, custoConsumidor=0;
	printf("Digite o custo de fabrica \n");
	scanf("%f", &custoFabrica);
	custoConsumidor=custoFabrica+(custoFabrica*0.73);
	printf("O valor final �: %.2f", custoConsumidor);
	
	
	
	float temp_celcius=0, temp_fahrenheit=0;
	printf("Digite a temperatura em celcius \n");
	scanf("%f", &temp_celcius);
	temp_fahrenheit=(9*temp_celcius+160)/5;
	printf("A temperatura em fahrenheit �: %.2f", temp_fahrenheit);
	
	
	float conversao=0, dolar=0, cotacao=0;
	printf("Digite o valor da cota��o \n");
	scanf("%f", &cotacao);
	printf("Digite a quantidade de d�lares \n");
	scanf("%f", &dolar);
	conversao=dolar*cotacao;
	printf("O valor da convers�o �: %.2f", conversao);
	*/
	
	/*
	int num1=0,num2=0,num3=0;
	printf("Digite um numero de duas casas\n");
	scanf("%d",&num1);
	num2=num1%10;
	num3=num1/10;
	printf("%d%d",num2,num3);
	*/
	
	
	
	
	int a=0, b=0;
	a=(88+66)/2;
	b=88-a;
	/*printf("A:%d \nB:%d",a, b);*/
	if (a>b){
		printf("O maior n�mero �: %d", a);
	}
	else {
		printf("O maior n�mero �: %d", b);
	}
	
	return 0;
}


