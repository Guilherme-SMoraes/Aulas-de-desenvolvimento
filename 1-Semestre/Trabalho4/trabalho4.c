#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//define para definir um número para o exercicio 3, não quis testar numa matriz 10x10
#define def 2

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"Portuguese");
	
	Exercicio03();
	
	return 0;
}
void Exercicio01(){
	
	//Variaveis para armazenar a matriz e as somas que o exercicio pede
	int matriz[3][3]={},somaAcima=0,somaAbaixo=0,somaDia=0;
	
	//for para receber os valores da matriz e realizar as somas
	for(int i=0;i<3;i++){
		for(int l=0;l<3;l++){
			
			//recebe o item da matriz da linha i e coluna l
			printf("Digite o número da linha %d e coluna %d\n",i+1,l+1);
			scanf("%d",&matriz[i][l]);
			
			//if para testar se o item está acima, abaixo ou está na diagonal principal
			if(i<l)
				somaAcima+=matriz[i][l];
				
			else if(i>l)
				somaAbaixo+=matriz[i][l];
				
			else if(i==l)
				somaDia+=matriz[i][l];
			
		}
	}
	
	//mostrar matriz digitada acima
	printf("A matriz digitada foi:");
	
	for(int i=0;i<3;i++){
		printf("\n");
		for(int l=0;l<3;l++){
			printf("%d ",matriz[i][l]);
		}
	}
	
	//mostra o resultado das somas feitas acima
	printf("\n\nA soma dos itens acima da diagonal principal é %d\n",somaAcima);
	printf("A soma dos itens da diagonal principal é %d\n",somaDia);
	printf("A soma dos itens abaixo da diagonal principal é %d",somaAbaixo);
	
	return;
	
}
void Exercicio02(){
	
	//variaveis para armazenar a matriz e a soma pedida no exercicio
	int matriz[3][3]={},soma=0;
	
	//for para pegar o item da matriz na linha i coluna l
	for(int i=0;i<3;i++){
		for(int l=0;l<3;l++){
			printf("Digite o número da linha %d e coluna %d\n",i+1,l+1);
			scanf("%d",&matriz[i][l]);
		}
	}
	
	//mostrar a matriz digitada acima
	printf("A matriz digitada foi:");
	
	for(int i=0;i<3;i++){
		printf("\n");
		for(int l=0;l<3;l++){
			printf("%d ",matriz[i][l]);
		}
	}
	
	printf("\n");
	
	//for para realizar a soma de todas as linhas da coluna l e depois mostrar o resultado e resetar a soma para fazer a soma da proxima coluna
	for(int l=0;l<3;l++){
		for(int i=0;i<3;i++){
			soma+=matriz[i][l];
		}
		printf("A soma das linhas da %dª é %d\n",l+1,soma);
		soma=0;
	}
	
	return;
	
}
void Exercicio03(){
	
	//variaveis para armezanar as respostas que cada aluno deu, o gabarito da prova e o número de acertos de cada aluno
	//o def ali na matriz é um define, vai la em cima do int main que ta ali com um comentario tbm
	char respostas[def][def]={},gabarito[def]={};
	int acertos[def]={};
	
	//for para receber as respostas de cada aluno
	for(int i=0;i<def;i++){
		for(int l=0;l<def;l++){
			printf("Digite a %dª resposta dada pelo %dº aluno\n",l+1,i+1);
			scanf(" %c",&respostas[i][l]);
		}
	}
	
	//for pra pegar as respostas do gabarito
	for(int i=0;i<def;i++){
		printf("Digite a %dª resposta do gabarito\n",i+1);
		scanf(" %c",&gabarito[i]);
	}
	
	//for pra ver quantas questões o aluno i acertou
	for(int i=0;i<def;i++){
		for(int l=0;l<def;l++){
			if(respostas[i][l]==gabarito[l])
				acertos[i]++;
		}
	}
	
	//for pra mostrar quantas questões o aluno i acertou
	for(int i=0;i<def;i++)
		printf("O %dº aluno acertou %d questões\n",i+1,acertos[i]);

	return;
	
}
