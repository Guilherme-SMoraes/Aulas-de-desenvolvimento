#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <strings.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"Portuguese");
	
	Exercicio05();	
	
	return 0;
}
void Exercicio01(){
	
	char nome[50]={},sobrenome[50]={},nomefull[100]={};
	
	printf("Digite o seu nome\n");
	gets(nome);
	printf("Digite o seu sobrenome\n");
	gets(sobrenome);
	
	strcat(nomefull, nome);
	strcat(nomefull, " ");
	strcat(nomefull, sobrenome);
	
	printf("%s",nomefull);
	
	return;
	
}
void Exercicio02(){
	
	float HT=0,VH=0,PD=0;
	double SB=0,TD=0,SL=0;
	
	printf("Digite o total de horas trabalhadas\n");
	scanf("%f",&HT);
	printf("Digite o valor de cada hora trabalhada\n");
	scanf("%f",&VH);
	printf("Digite o percentual do desconto\n");
	scanf("%f",&PD);
	
	SB=HT*VH;
	TD=SB*(PD/100);
	SL=SB-TD;
	
	printf("O salário bruto é R$%.2f\n",SB);
	printf("O total do desconto é R$%.2f\n",TD);
	printf("O salário liquido é R$%.2f",SL);
	
	return;
	
}
void Exercicio03(){
	
	int datatual=0;
	char dataformatada[10]={},aux[3]={};
	
	printf("Digite a data no formato DDMMAA\n");
	scanf("%d",&datatual);
	
	for(int i=0;i<3;i++){
		
		strcat(dataformatada,itoa(datatual%100,aux,10));
		if(i<2)
			strcat(dataformatada,"/");
		datatual/=100;
		
	}
	
	printf("Data no formato AAMMDD é %s\n",dataformatada);
	
	return;
	
}
void Exercicio04(){
	
	int N=0;
	
	printf("Digite um número\n");
	scanf("%d",&N);
	
	if(N<=10)
		printf("F1");
	else if(N<=100)
		printf("F2");
	else
		printf("F3");
	
	return;
	
}
void Exercicio05(){
	
	int N=0;
	float media=0;
	char nome[50][150]={};
	int notas[50][3]={};
	
	do{
		printf("Digite o número de participantes, >50 e <1\n");
		scanf("%d",&N);
	}while((N>50)||(N<1));
	
	for(int i=0;i<N;i++){
		printf("Digite o nome do %dº aluno\n",i+1);
		fflush(stdin);
		gets(nome[i]);
		for(int l=0;l<3;l++){
			printf("Digite a nota da %dª prova do %dº aluno",l+1,i+1);
			scanf("%d",&notas[i][l]);
		}
	}
	
	for(int i=0;i<N;i++){
		printf("=====================================\n");
		printf("Nome do aluno: %s\n",nome[i]);
		for(int l=0;l<3;l++){
			printf("Nota da %dª prova: %d\n",l+1,notas[i][l]);
			media+=notas[i][l];
		}
		printf("Média alcançada: %.2f\n",media/3);
		media=0;
		printf("=====================================\n");
	}
	
	return;
	
}
void Exercicio06(){
	
	int idade=0,mesNasc=0,diaNasc=0;
	time_t *rawtime;
	struct tm *calendar;
	
	printf("Quantos anos você tem?");
	scanf("%d",&idade);
	printf("Digite sua data de nascimento como no exemplo a seguir DD/MM/AAAA");
	scanf("%d/%d",&diaNasc,&mesNasc);

	time(&rawtime);
	calendar=localtime(&rawtime);
	
	printf("%d",calendar.tm_day);
	
	return;
	
}
