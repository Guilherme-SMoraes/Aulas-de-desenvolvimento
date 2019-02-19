#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<strings.h>
#include<conio.h>

struct Aluno{
	int codigo;
	char nome[50];
	int faltas;
	float nota;
	int bimestre;
};

void GravaFile(Aluno * aluno,int qtd_alunos){
	
	FILE * Faluno = fopen("aluno.data","w");
	FILE * Fqtd = fopen("qtd.data","w");
	
	fwrite(aluno,sizeof(Aluno),qtd_alunos+1,Faluno);
	fprintf(Fqtd,"%d",qtd_alunos);
	
	printf("Alunos Salvos! :D\n");
	
	fclose(Faluno);
	fclose(Fqtd);
	
}
void CarregaFile(Aluno * aluno, int * qtd_alunos){

	FILE * Faluno = fopen("aluno.data","r");
	FILE * Fqtd = fopen("qtd.data","r");
	
	if(Faluno==NULL || Fqtd==NULL){
		printf("Não foi encontrado o arquivo\n");
		return;
	}
	
	rewind(Faluno);
	rewind(Fqtd);
	
	fscanf(Fqtd,"%d",qtd_alunos);
	fread(aluno,sizeof(Aluno),*qtd_alunos,Faluno);
	
	printf("Loading complete\n");
	
	fclose(Faluno);
	fclose(Fqtd);
	
}
void MostraAluno(Aluno * aluno,int i){
	
	printf("Código: %d\n",aluno[i].codigo);
	printf("Nome: %s\n",aluno[i].nome);
	printf("Total de Faltas: %d\n",aluno[i].faltas);
	printf("Nota Média: %.2f\n",aluno[i].nota);
	printf("Bimestre cursante: %d\n",aluno[i].bimestre);
	
	printf("===========================================\n");
	
	
}
void MostrarMenu(int * opcao){
	
	printf("=================  MENU  =================\n");
	printf("1 - Cadastrar\n2 - Localizar\n3 - Salvar em arquivo\n4 - Carregar arquivo da memória\n5 - Alterar registro\n6 - Listar\n 0 - Sair\n");
	printf("==========================================\n");
	scanf("%d",opcao);
	
	
}
void Listar(Aluno * aluno, int cont){
	
	for(int i=0;i<cont;i++)
		MostraAluno(aluno,i);
	getch();
}
void Cadastrar(Aluno * aluno,int * cont){

	int codigo;
	printf("Digite o código do aluno, ou digite 0 para sair\n");
	scanf("%d",&codigo);
	while(codigo != 0){
		
		
		aluno[*cont].codigo = codigo;
		printf("Digite o nome do aluno\n");
		fflush(stdin);
		gets(aluno[*cont].nome);
		printf("Digite o número de faltas do aluno\n");
		scanf("%d",&aluno[*cont].faltas);
		printf("Digite a nota do aluno\n");
		scanf("%f",&aluno[*cont].nota);
		printf("Digite o bimestre em que o aluno se encontra\n");
		scanf("%d",&aluno[*cont].bimestre);
		
		*cont+=1;
		aluno = (Aluno*)realloc(aluno,sizeof(Aluno));
		
	
		printf("====================================================\n");
		printf("Digite o código do aluno, ou digite 0 para sair\n");
		scanf("%d",&codigo);
		
	}
		
}
int Localizar(Aluno * aluno, int cont){
	
	int cod;
	
	printf("Digite o código do Aluno que deseja localizar\n");
	scanf("%d",&cod);
	for(int i=0;i<cont;i++){//laço para passar pelo vetor e verificar os códigos
		
		if(aluno[i].codigo==cod)
			return i;
			
	}
	return -1;
	
}
void Alterar(Aluno * aluno,int cod){
	
	if(cod==-1){
		printf("ERRO: Código não encontrado!\n");
		return;
	}
	
	MostraAluno(aluno,cod);
	
	printf("=======================ALTERAÇÃO DO REGISTRO=======================\n");
	
	printf("Digite o nome do aluno\n");
	fflush(stdin);
	gets(aluno[cod].nome);
	printf("Digite o número de faltas do aluno\n");
	scanf("%d",&aluno[cod].faltas);
	printf("Digite a nota do aluno\n");
	scanf("%f",&aluno[cod].nota);
	printf("Digite o bimestre em que o aluno se encontra\n");
	scanf("%d",&aluno[cod].bimestre);
	
	
}

int main(){
	
	Aluno * aluno; //declara variavel do tipo aluno
	int opcao, qtd_alunos=0,aux; //declara variavel para receber a opção do menu selecionada pelo cliente

	
	setlocale(LC_ALL,"Portuguese");
	
	aluno = (Aluno *) calloc(2,sizeof(Aluno)); //aloca 2 elementos do tipo Aluno
	if (aluno==NULL) exit(EXIT_FAILURE); //se não houver memória suficiente, finaliza programa
	
	do{
		
		MostrarMenu(&opcao); //mostra menu de opções para o usuário
		switch(opcao){
		case 1:
			Cadastrar(aluno,&qtd_alunos); //chama procedimento para cadastrar os usuários.
		break;
		case 2:
			aux=Localizar(aluno,qtd_alunos);
			if(aux>-1)
				MostraAluno(aluno,aux);
			else
				printf("Aluno não localizado, cadastre-o ou busque por outro código\n");
		break;
		case 3:
			GravaFile(aluno,qtd_alunos);
		break;
		case 4:
			CarregaFile(aluno,&qtd_alunos);
		break;
		case 5:
			Alterar(aluno,Localizar(aluno,qtd_alunos));
		break;
		case 6:
			Listar(aluno,qtd_alunos);
		break;
		case 0:
			return 0;
		default:
			printf("Digite um número valido.");
		}
		
	}while(opcao!=0);
	free(aluno);
}
