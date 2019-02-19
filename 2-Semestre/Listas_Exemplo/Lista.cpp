#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <locale.h>

struct Noh{
	
	int valor;
	struct Noh * next;
	
};

void InsereInicio(Noh * & inicio,Noh * & fim){
	
	int valor;
	
	Noh * aux = NULL;
	
	printf("Digite o valor do início\n");
	scanf("%d",&valor);
	
	if(inicio==NULL){
		inicio = (Noh *) calloc(1,sizeof(Noh));
		inicio->valor=valor;
		inicio->next=NULL;
		fim=aux;
	}
	else{
		aux = (Noh *) calloc(1,sizeof(Noh));
		aux->valor=valor;
		aux->next=inicio;
		inicio=aux;
	}
	
	printf("Valor inserido!\n\n");
}

void Listar(Noh * & lista){
	
	int cont=1;
	
	if(lista==NULL){
		
		printf("Lista vazia\n");
		return;
		
	}
	
	do{
		
		printf("%d - %d\n",cont++,lista->valor);
		
	}while(lista->next!=NULL);
	
}

int main(){

	Noh * inicio = NULL;
	Noh * fim = NULL;
	
	int op;
	
	setlocale(LC_ALL,"Portuguese");
	
	do{
		
		printf("=============MENU=============\n");
		printf("1 - Insere início\n2 - Insere Final\n3 - Insere Meio\n4 - Remove inicio\n5 - Remove final\n6 - Remove Meio\n7-Listar\n  0 - Parar\n");
		scanf("%d",&op);
		printf("==============================\n\n");
		
		switch(op){
			
			case 1:
				InsereInicio(inicio,fim);
			break;
			
			case 7:
				Listar(inicio);
			break;
			
		}
		
	}while(op != 0);

}
