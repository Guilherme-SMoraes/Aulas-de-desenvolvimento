#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

//Código feito por:
//Guilherme dos Santos Moraes
//Débora Michele Machado

struct Fila{
	
	int dado;
	int prioridade;
	struct Fila * next;
	
};

void mostra(Fila * item){
	
	printf("\n============================\n");
	printf("Dado: %d\n",item->dado);
	printf("Prioridade: %d\n",item->prioridade);
	printf("============================\n");
	
}
void percorre_fila(Fila ** inicio){
	
	Fila * fim_fila=(*inicio);
	
	if(fim_fila==NULL){
		printf("FILA VAZIA\N");
		return;
	}
	
	while(fim_fila !=NULL){
		mostra(fim_fila);
		getch();
		fim_fila=fim_fila->next;
	}
	
}
void queue(Fila ** fim, Fila ** inicio){
	
	Fila * novo;
	Fila * start_fila=(*fim);
	Fila * fim_fila=(*inicio);
	
	novo=(Fila *)calloc(1,sizeof(Fila));
	
	printf("Digite um valor\n");
	scanf("%d",&novo->dado);
	printf("1-Fila Normal	===	2-Fila Preferencial\n");
	printf("Digite a prioridade\n");
	scanf("%d",&novo->prioridade);
	
	if(start_fila==NULL){
		novo->next=NULL;
		*inicio=novo;
		*fim=novo;
		return;
	
	}
	if(start_fila->prioridade >= novo->prioridade){
		start_fila->next=novo;
		novo->next=NULL;
		(*fim)=novo;
		return;
	}
		
	
	while(fim_fila->next!=NULL && fim_fila->next->prioridade <= novo->prioridade)
		fim_fila=fim_fila->next;
		
	novo->next=fim_fila->next;
	fim_fila->next = novo;
	
}
void dequeue(Fila ** fim, Fila ** inicio,int * ordem){
	
	Fila * fim_fila=(*inicio);
	Fila * antecessor;
	Fila * atende;
	
	//Trata excessão se a fila estiver vazia
	if(fim_fila==NULL){
		printf("Fila vazia!\n");
		return;	
	}
	//Trata excessão se a fila tiver somente um item
	if(fim_fila->next == NULL){
		mostra(fim_fila);	
		printf("Este item estará sendo desenfileirado!\n");
		free(fim_fila);
		(*inicio) = NULL;
		(*fim) = NULL;
		*ordem=0;
		return;
	}
	
	if(*ordem > 2){
		
		while(fim_fila->next != NULL && fim_fila->next->prioridade != 2){
			antecessor=fim_fila;
			fim_fila=fim_fila->next;
		}
		atende = fim_fila->next;
		
		//Trata excessão ultimo item da fila
		if(atende->next==NULL){
			
			antecessor->next= NULL;
			(*fim)=antecessor;
			mostra(fim_fila);	
			printf("Este item estará sendo desenfileirado!\n");
			getchar();
			
			free(fim_fila);
			*ordem=0;
			return;
		}
		
		fim_fila->next = atende->next;
		mostra(atende);	
		printf("Este item estará sendo desenfileirado!\n");
		getchar();
		
		free(atende);
		*ordem=0;
		
	}
	else{
		
		(*inicio)=fim_fila->next;
		mostra(fim_fila);
		printf("Este item estará sendo desenfileirado!\n");
		getchar();
		
		free(fim_fila);
		*ordem=(*ordem)+1;
	}	


}

int main(int argc, char** argv) {
	
	setlocale(LC_ALL,"Portuguese");
	
	int op,ordem=0;
	Fila * inicio=NULL;
	Fila * fim=NULL;
	do{
		printf("1-Queue\n2-Dequeue\n3-Mostra Lista\n  0-Sair\n");
		scanf("%d",&op);
		
		switch(op){
			case 1:
				queue(&fim,&inicio);
				break;
			case 2:
				dequeue(&fim,&inicio,&ordem);
				break;
			case 3:
				percorre_fila(&inicio);
				break;
			case 0:
				break;
			default:
				printf("Opção não localizada\n");
		}
	}while(op!=0);
	return 0;
}
