#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <strings.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"Portuguese");
	
	Exercicio03();
	
	return 0;
	
}
void Exercicio01(){
	
	int matriz[3][3]={};
	
	for(int i=0;i<3;i++){
		for(int l=0;l<3;l++){
			printf("Digite o número da linha %d e coluna %d ",i+1,l+1);
			scanf("%d",&matriz[i][l]);			
		}
	}
	
	for(int i=0;i<3;i++){
		printf("\n");
		for(int l=0;l<3;l++){
			printf("%d ",matriz[i][l]);
			matriz[i][l]*=5;			
		}	
	}
	
	printf("\n\n");
	
	for(int i=0;i<3;i++){
		printf("\n");
		for(int l=0;l<3;l++){
			printf("%d ",matriz[i][l]);			
		}	
	}	
	
	return;
	
}
void Exercicio02(){
	
	int matriz[5][5]={};
	
	for(int i=0;i<5;i++){		
		for(int l=0;l<5;l++){
			if(l==i)
				matriz[i][l]=1;
			else
				matriz[i][l]=0;			
		}		
	}
	
	for(int i=0;i<5;i++){
		printf("\n");
		for(int l=0;l<5;l++){
			printf("%d ",matriz[i][l]);			
		}	
	}
	
	return;
	
}
void Exercicio03(){
	
	int matriz[4][4]={},maior=0,linha=0,coluna=0;
	
	for(int i=0;i<4;i++){
		for(int l=0;l<4;l++){
			printf("Digite o número da linha %d e coluna %d ",i+1,l+1);
			scanf("%d",&matriz[i][l]);
			if((i==0)&&(l==0))
				maior=matriz[i][l];	
			if(matriz[i][l]>maior){
				maior=matriz[i][l];
				linha=i;
				coluna=l;
			}			
		}
	}
	
	printf("\n\nO maior elemento da matriz está na linha %d e coluna %d",linha+1, coluna+1);
	
	
	return;
	
}
