#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <strings.h>
#include <windows.h>

//Código escrito por Guilherme dos Santos Moraes

struct Noh{
	
	int prioridade;
	Noh * next;
	
};

void enqueue(Noh ** inicio,Noh ** fim){
	
	Noh * novo=(Noh*)calloc(1,sizeof(Noh));
	do{
		printf("Digite a prioridade do item de 1 a 5\n");
		scanf("%d",&novo->prioridade);
	}while(novo->prioridade<1||novo->prioridade>5);
	//trata caso de inserir em fila vazia
	if((*inicio)==NULL){
		
		(*inicio)=novo;
		(*fim)=novo;
		novo->next=novo;

		return;
		
	}
	
	novo->next=(*inicio);
	(*fim)->next=novo;
	(*inicio)=novo;
			
	return;
	
}
void mostra(Noh * item){
	
	printf("\n============================\n");
	printf("Prioridade: %d\n",item->prioridade);
	printf("============================\n");
	
}
void percorre_filaa(Noh ** inicio){
	
	Noh * fim_fila=(*inicio);
	
	do{
		mostra(fim_fila);
		fim_fila=fim_fila->next;
	}while(fim_fila->next !=(*inicio));
	mostra(fim_fila);
		fim_fila=fim_fila->next;
	
}

Noh dequeue_wait(Noh ** inicio,Noh ** fim){
	
	Noh aux;
	
	if((*inicio)==NULL){
		printf("Fila vazia!");
		aux.prioridade=NULL;
		return aux;
	}
	
	printf("A prioridade do item é %d\n",(*inicio)->prioridade);	
	Sleep(((*inicio)->prioridade*1000)*2);
	
	//auxiliar recebe a prioridade do inicio
	aux.prioridade=(*inicio)->prioridade;
	aux.next=(*inicio)->next;
	
	//trata caso de 1 item na lista
	if((*inicio)==(*fim))
		(*fim)=NULL;
	else{
		(*fim)->next=(*inicio)->next;
	}
	
	free((*inicio));
	(*inicio)=aux.next;
	
	return aux;
		
}

void enqueue_fim(Noh ** inicio,Noh ** fim,Noh insere){
	
	Noh * novo=(Noh*)calloc(1,sizeof(Noh));
	Noh * percorre_fila=(*inicio);
	Noh * fim_fila=(*fim);
	
	if(insere.prioridade==NULL)
		return;
	
	novo->prioridade=insere.prioridade;
	
	if((*fim)==NULL){
		
		(*inicio)=novo;
		(*fim)=novo;
		novo->next=novo;
		return;
		
	}
	
	novo->next=(*fim)->next;
	(*fim)->next=novo;
	(*fim)=novo;
	
	return;	
}


int main(){
	
	Noh *inicio=NULL,*fim=NULL;
	int op;
	
	setlocale(LC_ALL,"Portuguese");
	
	do{
		printf("Digite a ação desejada\n");
		printf("1-Enqueue\n2-Dequeue_wait\n3-Listar\n	0-Sair");
		scanf("%d",&op);
		
		switch(op){
			case 1:
				enqueue(&inicio,&fim);
				break;
			case 2:
				enqueue_fim(&inicio,&fim,dequeue_wait(&inicio,&fim));
				break;
			case 3:
				percorre_filaa(&inicio);
				break;
			case 0:
				printf("Obrigado por testar!");
				break;
			default:
				printf("Comando não encontrado!!!");
		}
	}while(op!=0);
	
}
