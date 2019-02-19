#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void PreencherVetor();
void MostraVetor();
int QuantosImpares();

#define tam 2

int main(int argc, char *argv[]) {
	
	int vetor[tam]={};
	
	setlocale(LC_ALL,"Portuguese");
	
	PreencherVetor(vetor);
	MostraVetor(vetor);
	printf("\nNo vetor digitado há %d números impares",QuantosImpares(vetor));
	
	return 0;
}

void PreencherVetor(int * v){
	int i=0;
	
	for(i=0;i<tam;i++){
		
		printf("Digite o %dº número\n",i+1);
		scanf("%d",&v[i]);
		
	}
	
}
int QuantosImpares(int * v){
	
	int i=0,impar=0;
	
	for(i=0;i<tam;i++){
		
		if(v[i]%2==1)
			impar++;
		
	}
	
	return impar;
	
}
void MostraVetor(int * v){
	
	int i;
	
	for(i=0;i<tam;i++)		
		printf("%d ",v[i]);

}
