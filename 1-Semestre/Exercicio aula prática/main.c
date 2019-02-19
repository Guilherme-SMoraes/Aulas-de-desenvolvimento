#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <strings.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#define ex2 3

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"Portuguese");
	
	Exercicio03();
	
	return 0;
}

void Exercicio01(){
	
	char palavra[50],L1,L2;
	
	printf("Digite uma palavra\n");
	scanf("%s",palavra);
	printf("Digite a letra que será trocada\n");
	scanf(" %c",&L1);
	printf("Digite a letra que vai realizar a troca\n");
	scanf(" %c",&L2);
	
	for (int i=0;palavra[i]!='\0';i++){
		if(palavra[i]==L1)
			palavra[i]=L2;
	}
	printf("%s",palavra);
	
	return;
	
}
void Exercicio02(){
	
	float num[ex2],media=0;
	
	for(int i=0;i<ex2;i++){
		
		printf("Digite o %dº número\n",i+1);
		scanf("%f",&num[i]);
		
		media+=num[i];
		
	}
	
	media/=ex2;
	printf("A média dos números é %.2f\n",media);
	
	for(int i=0;i<ex2;i++){
		
		if(num[i]==media){
			printf("Tem um número digitado igual a média");
			break;
		}
			
	}
		
	return;
	
}
void Exercicio03(){
	
	char frase[100],texto[100];
	
	printf("Digite um texto\n");
	gets(frase);
	printf("Digite outro texto\n");
	gets(texto);
	
	for(int i=0;texto[i]!='\0';i++){
		
		if(frase[i]!=texto[i]){
			
			printf("Texto não faz parte do texto inicial");
			return;
			
		}
		
	}
	
	printf("Texto faz parte do texto inicial");
	
	return;
	
}
