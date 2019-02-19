gu#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <locale.h>

/*

CAMILA BALDI
DEBORA MACHADO
GUILHERME MORAES
LARISSA OLIVEIRA

*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


struct arv{
    int valor;
    struct arv *esq;
    struct arv *dir;
};


arv * insercao(arv *aux, int valor){
	if (aux == NULL){
		aux=(arv*)calloc(1,sizeof(arv));
	    aux->esq=NULL;
	    aux->dir=NULL;
	    aux->valor=valor;
	}else if (valor < aux->valor){
		aux->esq = insercao(aux->esq, valor);			
	}else{
		aux->dir = insercao(aux->dir, valor);
	}
}


void exibirEmOrdem(arv *aux){ 
    if(aux != NULL){
        exibirEmOrdem(aux->esq);
        printf("%d ", aux->valor);
        exibirEmOrdem(aux->dir);
    }
}

void exibirPreOrdem(arv *aux){
    if(aux != NULL){
        printf("%d ", aux->valor);
        exibirPreOrdem(aux->esq);
        exibirPreOrdem(aux->dir);
    }
}

void exibirPosOrdem(arv *aux){
    if(aux != NULL){
        exibirPosOrdem(aux->esq);
        exibirPosOrdem(aux->dir);
        printf("%d ", aux->valor);
    }
}


int contarNos(arv *aux){
    if(aux == NULL){
        return 0;
    }else{
        return 1 + contarNos(aux->esq) + contarNos(aux->dir);
	}
}

int busca(arv *aux, int key){ 
	int n=0;
	
	if(aux != NULL){
		if(aux->valor==key)
			n++;
        n+=busca(aux->esq,key);
        n+=busca(aux->dir,key);
    }
	
	return n;
	
}


int main(){
	
	arv *pRaiz = NULL;
	int op;
	int valor;
	int qntNo;
	int key;
	
    setlocale(LC_ALL,"Portuguese");
	
	do{
	printf("\n\n----------MENU---------\n\n");
	printf(" 1 -Inserir na arvore\n");
	printf(" 2 -Qnt. do elemento\n");
	printf(" 3 -Qnt. de nós\n");
	printf(" 4 -Listar em Pré-Ordem\n");
	printf(" 5 -Listar em Ordem\n");
	printf(" 6 -Listar em Pós-Ordem\n");
	printf(" 7 -SAIR\n");
	printf("-----------------------\n\n");
	printf("Informe sua opção: ");
	scanf("%d", &op);
	
	switch (op){
		
			case 1: 
				printf("\nInforme um número para ser inserido na arvore: ");
				scanf("%d", &valor);
				pRaiz=insercao(pRaiz, valor);
			break;
				
			case 2:
				printf("Insira um elemento para ser contado: ");
				scanf("%d", &key);
				printf("A quantidade de vezes que o numero inserido se repete é:%d ", busca(pRaiz, key));				
			break;
			
			case 3: 
				printf("A quantidade de nós da arvore corresponde a:%d ", contarNos(pRaiz));
			break;
			
			case 4:
				printf("PRÉ-ORDEM: \n\n");
				exibirPreOrdem(pRaiz);
			break;
					
			case 5:
				printf("ORDEM: \n\n");
				exibirEmOrdem(pRaiz);
			break;
			
			case 6: 
				printf("PÓS-ORDEM: \n\n");
				exibirPosOrdem(pRaiz);	
			break;
	}

    }while(op!=7);
}
