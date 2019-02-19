#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <strings.h>

#define max 5

struct Noh{
	
	int dado;
	Noh * nohEsq;
	Noh * nohDir;
	
};

/*
void insercao(Noh **raiz, int valor){
	
	if (*raiz == NULL){
	      *raiz=(Noh *)malloc(sizeof (Noh));
	      (*raiz)->nohEsq=NULL;
	      (*raiz)->nohDir=NULL;
	      (*raiz)->dado=valor;
	
	}else{
		if (valor < ((*raiz)->dado)){
			insercao(&((*raiz)->nohEsq), valor);
		
		}else{
			insercao(&((*raiz)->nohDir), valor);
		}
	}
}
*/

Noh * insereArvore(Noh ** aux,int posicao,int vetor[max]){
	
	int vetEsq,vetDir;
	
	if(vetor[posicao]==0){
		
		vetEsq=2*posicao+1;
		vetDir=2*posicao+2;
		
		if(vetEsq<max)
			vetor[vetEsq]=0;
		if(vetDir<max)
			vetor[vetDir]=0;
		
		printf("Nó da posição %d está vazio\n",posicao);
		
		return NULL;
		
	}
	
	if((*aux)==NULL){
		(*aux)=(Noh *)calloc(1,sizeof(Noh));
		(*aux)->nohEsq=NULL;
		(*aux)->nohDir=NULL;
		(*aux)->dado=vetor[posicao];
	}
	else if (vetor[posicao] < (*aux)->dado){
		(*aux)->nohEsq = insereArvore(&((*aux)->nohEsq),posicao,vetor);			
	}
	else{
		(*aux)->nohDir = insereArvore(&((*aux)->nohDir),posicao,vetor);
	}
	
	printf("valor %d inserido\n",(*aux)->dado);
}


int ContaNoh(Noh * aux){
	
	int conta=0;
	
	if(aux!=NULL){
		conta++;
		conta+=ContaNoh(aux->nohEsq);
		conta+=ContaNoh(aux->nohDir);		
	}
	
	return conta;
	
}

void ExibeEmOrdem(Noh * aux){
	
	if(aux!=NULL){
		ExibeEmOrdem(aux->nohEsq);
		printf("%d ",aux->dado);
		ExibeEmOrdem(aux->nohDir);		
	}
	
}

void ExibePreOrdem(Noh * aux){
	
	if(aux!=NULL){
		printf("%d ",aux->dado);
		ExibePreOrdem(aux->nohEsq);
		ExibePreOrdem(aux->nohDir);		
	}
	
}

void ExibePosOrdem(Noh * aux){
	
	if(aux!=NULL){
		ExibePosOrdem(aux->nohEsq);
		ExibePosOrdem(aux->nohDir);		
		printf("%d ",aux->dado);
	}
	
}

int main(){
	
	int vetor[max];
	int op;
	Noh * raiz=NULL;
	
	setlocale(LC_ALL,"Portuguese");
	
	for(int i=0;i<max;i++){
		
		printf("Escreva o número da posição %d, insira 0 para deixar o Noh vazio: ",i);
		scanf("%d",&vetor[i]);
		
	}
	for(int i=0;i<max;i++){	
		insereArvore(&raiz,i,vetor);
	}
	
	do{
		printf("\n=============MENU=============\n");
		printf("1-Contar qtd de nós\n");
		printf("2-Listar em Pré-Ordem\n");
		printf("3-Listar em Ordem\n");
		printf("4-Listar em Pós-Ordem\n");
		printf("5-Verifica se está balanceada\n");
		printf("6-Listar nós ancestrais\n");
		printf("	0-SAIR\n");
		printf("==============================\n");
		printf("Digite a opção desejada:\n");
		scanf("%d",&op);
		
		switch(op){
			
			case 1:
				printf("A árvore tem %d nós",ContaNoh(raiz));
			break;
			
			case 2:
				ExibePreOrdem(raiz);
			break;
			
			case 3:
				ExibeEmOrdem(raiz);
			break;
			
			case 4:
				ExibePosOrdem(raiz);
			break;
			
			case 5:
				printf("%x",raiz);
			break;
			
			case 6:
				printf("TESTE!");
			break;
			
			case 0:
				printf("TCHAU!");
			break;
			
			
		}
	}while(op!=0);
}
