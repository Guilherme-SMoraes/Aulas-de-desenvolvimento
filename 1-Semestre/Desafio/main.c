#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"Portuguese");
	
	Exercicio01();
		
	return 0;
}
void Exercicio01(){
	
	int matriz[6][6]={},matrizt[6][6]={},diagonal=0;
	
	for(int i=0;i<6;i++){
		for(int l=0;l<6;l++){
			printf("Digite o valor da linha %dª e coluna %dª\n",i+1,l+1);
			scanf("%d",&matriz[i][l]);			
		}
	}
	for(int l=0;l<6;l++){
		for(int i=0;i<6;i++){
			matrizt[l][i]=matriz[i][l];			
		}
	}
	for(int i=0;i<6;i++){
		for(int l=0;l<6;l++){
			if(i==l)
				diagonal+=matrizt[i][l];	
		}
	}
	for(int i=0;i<6;i++){
		printf("\n");
		for(int l=0;l<6;l++){
			printf("%d ",matrizt[i][l]);			
		}
	}
	printf("\nSoma da diagonal %d",diagonal);
	
	return;
	
}

