#include <stdio.h>

#define max 2

struct Aluno{
	int matricula;
	char nome[100];
	float p1;
	float p2;
	float p3;
};

void leitura(Aluno alunos[]){
	for(int i=0;i<max;i++){
		
		printf("Digite a matricula: ");
		scanf("%d",&alunos[i].matricula);
		fflush(stdin);
		printf("Digite o nome: ");
		gets(alunos[i].nome);
		fflush(stdin);
		printf("Digite a P1: ");
		scanf("%f",&alunos[i].p1);
		printf("Digite a P2: ");
		scanf("%f",&alunos[i].p2);
		printf("Digite a P3: ");
		scanf("%f",&alunos[i].p3);
		printf("\n\n=============================\n\n");
				
	}
}
Aluno maiorNotaP1(Aluno aluno[]){

	float maior=0;
	Aluno alunoMaiorP1;
	for(int i=0;i<max;i++){
		
		if(aluno[i].p1>maior){
			maior=aluno[i].p1;
			alunoMaiorP1=aluno[i];
		}
		
	}	
	return alunoMaiorP1;
}
Aluno maiorMedia(Aluno aluno[]){
	
	float maior=0;
	float media=0;
	Aluno alunoMaiorMedia;
	for(int i=0;i<max;i++){
		media=(aluno[i].p1+aluno[i].p2+aluno[i].p3)/3
	}
	
}

int main(){
	
	Aluno aluno[max];
	leitura(aluno);
	printf("%.2f",maiorNotaP1(aluno).p1);
	
}
