#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"Portuguese");
	
	Exercicio05();
	
	return 0;
}
void Exercicio01(){
	
	int N=0,X=0,exp=1;
	
	do{

		printf("Digite um número para X\n");
		scanf("%d",&X);
		printf("Digite um número para N\n");
		scanf("%d",&N);
		
		if((N<0)||(N>9)||(X<0)||(X>9)){
			printf("\a");
			printf("==========================\n\n");
		}
		
	}while((N<0)||(N>9)||(X<0)||(X>9));
	
	for(int i=0;i<N;i++)
		exp*=X;
	

	printf("O resultado da conta é %d",exp);
	
	return;
		
}
void Exercicio02(){
	
	int num=0;
	
	printf("Digite um número\n");
	scanf("%d",&num);
	
	do{
		
		printf("%d",num%10);
		num/=10;
		
	}while(num!=0);	
	
	return;
	
}
void Exercicio03(){
	
	int num_linhas=0;
	
	printf("Digite o número de linhas\n");
	scanf("%d",&num_linhas);
	
	printf("======================================\n");
	
	for(int cont=0;cont<num_linhas;cont++){
		
		for(int i=0;i<num_linhas-cont-1;i++)
			printf(" ");
			
		for(int i=0;i<(cont*2)+1;i++)
			printf("$");
			
		for(int i=0;i<num_linhas-cont-1;i++)
			printf(" ");
		
		printf("\n");
		
	}
	
	return;
	
}
void Exercicio04(){
	
	int V[50]={0},N=0;
	long soma=0,produto=1;
	
	do{
		
		printf("Digite a dimensão do vetor menor que 50\n");
		scanf("%d",&N);
		
	}while((N<1)||(N>50));
	
	for(int i=0;i<N;i++){
		
		printf("\nDigite o %dº elemento\n",i+1);
		scanf("%d",&V[i]);
		
		soma+=V[i];
		produto*=V[i];
		
	}
	
	printf("\n\n=======================================\n\n");
	printf("Os números digitados foram:\n");
	
	for(int i=0;i<N;i++){
		
		printf("%d\n",V[i]);
		
	}
	
	printf("\nA soma desses números é %d\n",soma);
	printf("O produto desses números é %d\n",produto);
	
	return;
	
}
void Exercicio05(){
	
	int V[50]={0},N=0,sub=0;
	
	do{
		
		printf("Digite a dimensão do vetor menor que 50\n");
		scanf("%d",&N);
		
	}while((N<1)||(N>50));
	
	for(int i=0;i<N;i++){
		
		printf("\nDigite o %dº elemento\n",i+1);
		scanf("%d",&V[i]);
		
	}
	
	printf("\n\n=======================================\n\n");
	
	for(int i=0;i<N;i++){
		
		if(V[i]==0){
			
			for(int o=i;o<N;o++)
				V[o]=V[o+1];
				
			sub++;
			
		}
			
	}
	
	N-=sub;
	
	for(int i=0;i<N;i++)
		printf("%d\n",V[i]);
	
	
	return;
	
}
