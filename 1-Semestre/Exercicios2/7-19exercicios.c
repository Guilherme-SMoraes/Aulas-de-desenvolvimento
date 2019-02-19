#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"Portuguese");
	
	//Coloque a função do exercicio abaixo
	Exercicio19();
	
	return 0;
}

void Exercicio07(){
	
	int A=0,B=0;
	
	printf("Digite um número\n");
	scanf("%d",&A);
	printf("Digite outro número\n");
	scanf("%d",&B);
	
	if(A>=B)
		printf("O maior é %d",A);
	else
		printf("O maior é %d",B);
	
}
void Exercicio08(){
	
	int N=0;
	
	printf("Digite um número\n");
	scanf("%d",&N);
	
	if(N<=10)
		printf("F1");
		
	else if(N<=100)
		printf("F2");
		
	else
		printf("F3");
		
	
}
void Exercicio09(){
	
	int ano_atual=0,ano_nascimento=0,idade=0;
	
	printf("Digite seu ano de nascimento\n");
	scanf("%d",&ano_atual);
	printf("Digite o ano atual\n");
	scanf("%d",&ano_nascimento);
	
	idade=ano_atual-ano_nascimento;
	
	if(idade<16)
		printf("Você não pode votar");
	
	else
		printf("Você pode votar");
	
}
void Exercicio10(){
	
	float salario_fixo=0,total_vendas=0,salario_final=0;
	
	printf("Digite o salario fixo\n");
	scanf("%f",&salario_fixo);
	printf("Digite o total das vendas desse vendedor\n");
	scanf("%f",&total_vendas);
	
	salario_final=salario_fixo+(total_vendas*.3);
	
	if(total_vendas>1500)
		salario_final+=(total_vendas-1500)*.5;
		
	printf("O salario final desse funcionário é de R$%.2f",salario_final);
	
}
void Exercicio11(){
	
	int conta_cliente=0;
	float saldo=0,debito=0,credito=0,saldo_final=0;
	
	printf("Digite o número da conta\n");
	scanf("%d",&conta_cliente);
	printf("Digite o saldo");
	scanf("%f",&saldo);
	printf("Digite o débito da conta\n");
	scanf("%f",&debito);
	printf("Digite o crédito da conta\n");
	scanf("%f",&credito);
	
	saldo_final=saldo-debito+credito;
	
	printf("O seu saldo final é de R$%.2f\n",saldo_final);
	
	if(saldo_final<0)
		printf("O Seu saldo está NEGATIVO");
		
	else
		printf("O seu saldo está POSITIVO");
	
	
}
void Exercicio12(){
	
	int num1=0,num2=0,num3=0;
	
	printf("Digite o primeiro número\n");
	scanf("%d",&num1);
	printf("Digite o segundo número\n");
	scanf("%d",&num2);
	printf("Digite o terceiro número\n");
	scanf("%d",&num3);
	
	if((num1>num2)&&(num1>num3))
		printf("O maior é %d",num1);
		
	else if((num2>num1)&&(num2>num3))
		printf("O maior é %d",num2);
		
		else
			printf("O maior é %d",num3);

}
void Exercicio13(){
	
	int num1=0,num2=0;
	
	printf("Digite um número\n");
	scanf("%d",&num1);
	printf("Digite outro número\n");
	scanf("%d",&num2);
	
	if(num1==num2)
		printf("Números iguais");
	
	else if(num1>num2)
		printf("Primeiro é maior");
		
		else
			printf("Segundo é maior");
	
}
void Exercicio14(){
	
	int tipo_combustivel=0;
	float litros=0, preco_combustivel=0,preco_final=0;
	
	printf("Digite o tipo de combustivel que você desja usar para abastecer\n");
	printf("1-Álcool      |      2-Gasolina\n");
	scanf("%d",&tipo_combustivel);
	printf("Quantos litros de combustivel você quer?\n");
	scanf("%f",&litros);
	
	if(tipo_combustivel==1){
		
		if(litros<=20)
			preco_final=litros*(2.9-(2.9*.03));
		
		else
			preco_final=litros*(2.9-(2.9*.05));
			
	}
	else if(tipo_combustivel==2){
		
		if(litros<=20)
			preco_final=litros*(3.3-(3.3*.04));
		
		else
			preco_final=litros*(3.3-(3.3*.06));
			
	}
	else{
		printf("Tipo de combustivel invalido");
		return;
	}
	printf("O valor do combustivel é R$%.2f",preco_final);
	
}
void Exercicio15(){
	
	float nota1=0,nota2=0,nota3=0,media=0;
	
	printf("Digite a primeira nota\n");
	scanf("%f",&nota1);
	printf("Digite a segunda nota\n");
	scanf("%f",&nota2);
	printf("Digite a terceira nota\n");
	scanf("%f",&nota3);
	
	media=(nota1+nota2+nota3)/3;
	
	if(media<6)
		printf("Conceito: D");
		
	else if(media<7.5)
		printf("Conceito: C");
		
	else if(media<9)
		printf("Conceito: B");
		
	else
		printf("Conceito: A");	
	
}
void Exercicio16(){
	
	int num_empregado=0,ano_nascimento=0,ano_ingresso=0,idade=0,tempo_trabalhado=0,ano_atual=0;
	
	printf("Digite o número do empregado\n");
	scanf("%d",&num_empregado);
	printf("Digite o ano de nascimento do empregado\n");
	scanf("%d",&ano_nascimento);
	printf("Digite o ano de ingresso do empregado\n");	
	scanf("%d",&ano_ingresso);
	printf("Digite o ano atual\n");
	scanf("%d",&ano_atual);
	
	idade=ano_atual-ano_nascimento;
	tempo_trabalhado=ano_atual-ano_ingresso;
	
	if((idade>=65)||(tempo_trabalhado>=30))
		printf("Requerer aposentadoria");
	else if((idade>=60)&&(tempo_trabalhado>=25))
		printf("Requerer aposentadoria");
	else
		printf("Não requerer");
		
	
}
void Exercicio17(){
	
	char letra=' ';
	
	printf("Digite uma letra\n");
	scanf(" %c",&letra);
	
	switch(letra){
		case 'a':
			printf("Vogal");
			break;
		case 'e':
			printf("Vogal");
			break;
		case 'i':
			printf("Vogal");
			break;
		case 'o':
			printf("Vogal");
			break;
		case 'u':
			printf("Vogal");
			break;
		default:
			printf("Consoante");
	}
	
}
void Exercicio18(){
	
	float num1=0,num2=0,resul=0;
	char operador=' ';
	
	printf("Digite um número\n");
	scanf("%f",&num1);
	printf("Digite outro número\n");
	scanf("%f",&num2);
	printf("Digite o operador da seguinte tabela:\n");
	printf("+ Soma | - Subtração | * Multiplicação | / Divisão\n");
	scanf(" %c",&operador);
	
	switch(operador){
		case '+':
			resul=num1+num2;
			break;
		case '-':
			resul=num1-num2;
			break;
		case '*':
			resul=num1*num2;
			break;
		case '/':
			resul=num1/num2;
			break;
		default:
			printf("Operador não identificado");
	}
	printf("O resultado é %.2f",resul);
	
}
void Exercicio19(){
	
	int num=0;
	
	printf("Digite um número de 1 a 10\n");
	scanf("%d",&num);
	
	switch(num){
		
		case 1:
			printf("Um");
			break;
		case 2:
			printf("Dois");
			break;
		case 3:
			printf("Três");
			break;
		case 4:
			printf("Quatro");
			break;
		case 5:
			printf("Cinco");
			break;
		case 6:
			printf("Seis");
			break;
		case 7:
			printf("Sete");
			break;
		case 8:
			printf("Oito");
			break;
		case 9:
			printf("Nove");
			break;
		case 10:
			printf("Dez");
			break;
		default:
			printf("Não está entre 1 e 10");
	}
	
}
