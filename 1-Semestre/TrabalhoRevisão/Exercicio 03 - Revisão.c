#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

void zerarMatriz(int m[][8]){

	int i=0, j=0;
	for(i=0;i<8;i++){
		for(j=0;j<8;j++){
			m[i][j]=0;
		}
	}

}

int TestaJogada(int campo[][8],int linha,int coluna){
	
	if(linha>8 || linha<1 || coluna<1 || coluna>8){
		printf("Coordenadas invalidas! Digite novamente...\n\n");
		return 1;
	}
	
	if(campo[linha-1][coluna-1]==1){
		printf("Posicao ocupada! Digite novamente...\n\n");
		return 1;
	}
	
	campo[linha-1][coluna-1]=1;
	
	printf("\n");
	
	return 0;
	
}

int TestaGanhador(int acertos){
	
	if(acertos==3)
		return 1;
	
	return 0;
	
}

void MostraPlacar(int acertos,int tirosRestantes){
	
	printf("Você acertou %d, faltam %d\n",acertos,3-acertos);
	printf("\nTiros restantes: %d\n",tirosRestantes);
	
}

int main(int argc, char *argv[]) {
	
	int gabarito[8][8], tiros[8][8], i=0, linhaTiro=0, colunaTiro=0, tirosRestantes=5, j=0, acertos=0;
	char jogador1[20], jogador2[20];
	

	zerarMatriz(gabarito);
	zerarMatriz(tiros);

	printf("==================== Batalha Naval ====================\n\n");

	printf("Digite o nome do jogador 1: ");
	gets(jogador1);
	fflush(stdin);
	printf("Digite o nome do jogador 2: ");
	gets(jogador2);
	fflush(stdin);
	
	printf("\n");

	for(i=0; i<3; i++){
		do{
			printf("Digite a linha da %d posicao: ",i+1);
			scanf("%d", &linhaTiro);
			printf("Digite a coluna da %d posicao: ",i+1);
			scanf("%d", &colunaTiro);
			
		}while(TestaJogada(gabarito,linhaTiro,colunaTiro)==1);
		
	}
	
	printf("Que os jogos comecem...\n");
	
	//comeco jogo
	
	do{
		
		do{
			
			printf("Digite a linha e a coluna do seu tiro\n");
			scanf("%d,%d",&linhaTiro,&colunaTiro);
			
		}while(TestaJogada(tiros,linhaTiro,colunaTiro)==1);
		
				
		if(gabarito[linhaTiro-1][colunaTiro-1]==tiros[linhaTiro-1][colunaTiro-1]){
			acertos++;
		}
		else
			tirosRestantes--;
		
		if(TestaGanhador(acertos)==1){
			printf("\n\n%s Ganhou!\n\n",jogador2);
			return 0;
		}
		
		MostraPlacar(acertos,tirosRestantes);
		
	}while(tirosRestantes!=0);
	
	printf("\n\n%s Ganhou\n\n",jogador1);	

}
