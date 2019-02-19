#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <conio.h>
#include <locale.h>

//Código feito por:
//Guilherme dos Santos Moraes

struct Aluno{
	int matr;
	char nome[80];
	float nota;
	char sexo;
	struct Aluno * prox;
	
};

void mostra_aluno(Aluno * item){
	
	printf("\n============================\n");
	printf("Matricula: %d\n",item->matr);
	printf("Nome: %s\n",item->nome);
	printf("Nota: %.2f\n",item->nota);
	printf("Sexo: %c\n",item->sexo);
	printf("============================\n");
	
}
void percorre_lista(Aluno ** inicio){
	
	Aluno * start_lista=(*inicio);
	
	if(start_lista==NULL){
		printf("FILA VAZIA\N");
		return;
	}
	
	while(start_lista != NULL){
		mostra_aluno(start_lista);
		getch();
		start_lista=start_lista->prox;
	}
	printf("\n");
}
Aluno * divide_lista(Aluno ** inicio,int matricula){
		
	Aluno * start_lista = (*inicio);
	Aluno * anterior = NULL;
	
	//trata excessão lista vazia
	if(start_lista == NULL){
		printf("LISTA VAZIA\n");
		getch();
		return NULL;
	}
	//busca na lista a matricula desejada
	while(start_lista != NULL && start_lista->matr != matricula){
		anterior=start_lista;
		start_lista=start_lista->prox;
	}
	//trata excessão matricula não encontrada
	if(start_lista == NULL){
		printf("Matricula não encontrada na primeira lista\n");
		getch();
		return NULL;
	}
	//trata excessão matricula procurada esta no primeiro item
	if(anterior == NULL){
		printf("A matricula digitada é o primeiro item da lista!\n");
		getch();
		return start_lista;
	}
	
	anterior->prox = NULL;
	printf("Este aluno será o inicio da segunda fila");
	mostra_aluno(start_lista);
	getch();
	return start_lista;
	
}
void inserirOrdenadamente(Aluno ** inicio, Aluno ** fim){

    Aluno * start_lista = (*inicio);
    Aluno * novo = (Aluno*)calloc(1,sizeof(Aluno));
    Aluno * anterior = NULL;
	
	printf("Digite o número da matricula\n");
	scanf("%d",&novo->matr);
	printf("Digite o nome do aluno\n");
	fflush(stdin);
	gets(novo->nome);
	printf("Digite a nota média do aluno\n");
	scanf("%f",&novo->nota);
	printf("Digite o sexo do aluno(M-Masculino  |   F-Feminino)\n ");
	scanf(" %c",&novo->sexo);
	
	//trata excessão lista vazia
    if(start_lista == NULL){
        novo->prox = NULL;
        (*inicio) = novo;
        (*fim) = novo;
    } 
	else{
		//procura o lugar onde o struct vai se encaixar para lista ficar ordenada crescentemente
        while(start_lista->prox != NULL && start_lista->prox->matr < novo->matr){
            anterior = start_lista;
            start_lista = start_lista->prox;
        }
        novo->prox = start_lista->prox;
		
		//insere no começo
        if(anterior == NULL && start_lista->matr > novo->matr){
        	novo->prox = start_lista;
            (*inicio) = novo;
        }
        
        //insere no meio
		else if(start_lista->prox != NULL){
            start_lista->prox = novo;
        }
        
        //trata excessão insere no final da lista
        else
        	start_lista->prox = novo;
		
        
    }
}
int main(){
	
	Aluno * inicio=NULL;
	Aluno * fim=NULL;
	Aluno * segunda_lista;
	int op,matricula,lista;
	
	setlocale(LC_ALL,"Portuguese");
	
    do{
		printf("=========================================\n");
		printf("1- Cadastrar aluno na lista\n");
		printf("2- Dividir a lista a partir de uma matricula\n");
		printf("3- Percorrer listas\n");
		printf("  0- Sair\n");
		scanf("%d",&op);
		printf("=========================================\n");

		switch (op){
			case 1:
			    inserirOrdenadamente(&inicio,&fim);
			    break;
			case 2:	
				printf("Digite a matricula de um aluno para dividir a lista\n");
				scanf("%d",&matricula);
                segunda_lista=divide_lista(&inicio,matricula);
			    break;
			case 3:
				printf("Você deseja percorrer a 1ª ou a 2ª lista?\n");
				scanf("%d",&lista);
				if(lista==1)
					percorre_lista(&inicio);
				if(lista==2)
					percorre_lista(&segunda_lista);
				break;
			case 0:
				break;
			default:
				printf("Comando não identificado\n");
        }
    }while(op!=0);
}
