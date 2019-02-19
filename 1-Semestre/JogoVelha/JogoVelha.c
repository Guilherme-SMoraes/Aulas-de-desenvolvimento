#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <locale.h>
#include <stdbool.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//Variável global que armazena o jogo
char jogo[3][3]={};

//Protótipos
void IniciarJogo();
void DigitarJogada();
void InsereNoJogo();		
void MostrarJogoVelha();
int VerificaJogadaValida();
int TestaDiagonalSecundaria();
int TestaDiagonalPrincipal();
int EstaNaDiagonal();
int TestaColuna();
int TestaLinha();
int VerificaGanhador();


int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"Portuguese");
	
	char jogadores[2][50]={};

	//Pega os nomes dos jogadores
	printf("Digite o nome do primeiro jogador que utilizará o X\n");
	fflush(stdin);
	gets(jogadores[0]);
	printf("Digite o nome do segundo jogador que utilizará o O\n");
	fflush(stdin);
	gets(jogadores[1]);
	
	//chama função que contém todo o jogo
	IniciarJogo(jogadores[0],jogadores[1]);
	
	
	return 0;
}
void IniciarJogo(char jogador1[],char jogador2[]){
	
	int jogada[2];
	
	for(int d=0;d<9;d++){
		if(d%2==0)
			DigitarJogada(jogador1,jogada);
		else
			DigitarJogada(jogador2,jogada);
		
		InsereNoJogo(jogada,d);
		MostrarJogoVelha();
		
		if(VerificaGanhador(jogada,d)==1){
			printf("O jogador %s ganhou",d%2==0 ? jogador1:jogador2);
			return;
		}	
	}
					
	printf("Deu Velha!");
	
	return;

}
void DigitarJogada(char jogador[],int jogada[]){
	
	do{
		
		printf("%s: Digite a linha e a coluna que deseja inserir: ",jogador);
		scanf("%d,%d",&jogada[0],&jogada[1]);
		jogada[0]--;
		jogada[1]--;
				
	}while(VerificaJogadaValida(jogada)==1);
	
	return;
	
}
int VerificaJogadaValida(int jogada[]){
	
	if(jogada[0]>3||jogada[0]<0)
		return 1;
	
	if(jogada[1]>3||jogada[1]<0)
		return 1;
	
	if(jogo[jogada[0]][jogada[1]]=='X')
		return 1;
		
	if(jogo[jogada[0]][jogada[1]]=='O')
		return 1;
		
	return 0;
	
}
void InsereNoJogo(int jogada[],int NumJogadas){
	
	if(NumJogadas%2==0)
		jogo[jogada[0]][jogada[1]]='X';
	else
		jogo[jogada[0]][jogada[1]]='O';
	
	return;
	
}
void MostrarJogoVelha(){
	
	for(int i=0;i<3;i++){
		printf("\n");
		for(int l=0;l<3;l++){
			printf("%c ",jogo[i][l]);
			if(l<2)
				printf("|");
		}
		if(i<2)
			printf("\n---------");
	}
	printf("\n");
	
	return;
	
}
int VerificaGanhador(int jogada[],int numJogadas){
	
	int hit=0;
	
	if(TestaLinha(jogada[0],numJogadas)==1)
		return 1;
	
	if(TestaColuna(jogada[1],numJogadas)==1)
		return 1;
	
	
	if(EstaNaDiagonal(jogada)==1){
		
		if(TestaDiagonalPrincipal(numJogadas)==1)
			return 1;
		
		if(TestaDiagonalSecundaria(numJogadas)==1)
			return 1;
		
	}
			
		return 0;

}
int TestaLinha(int linha,int numJogadas){
	
	int hit=0;
	
	for(int i=0;i<3;i++){
		if(numJogadas%2==0){
			if(jogo[linha][i]=='X')
				hit++;
			else
				hit=0;
		}
		else{
			if(jogo[linha][i]=='O')
				hit++;
			else
				hit=0;
		}		
	}
	if(hit==3)
		return 1;	
	
	return 0;
	
}
int TestaColuna(int coluna,int numJogadas){
	
	int hit=0;
	
	for(int i=0;i<3;i++){
		if(numJogadas%2==0){
			if(jogo[i][coluna]=='X')
				hit++;
			else
				hit=0;
		}
		else{
			if(jogo[i][coluna]=='O')
				hit++;
			else
				hit=0;
		}
		
	}
	if(hit==3)
		return 1;
	
	return 0;
	
}
int EstaNaDiagonal(int jogada[]){
	
	if(jogada[0]==jogada[1])
		return 1;
	if(jogada[0]==0&&jogada[1]==2)
		return 1;
	if(jogada[0]==3&&jogada[1]==1)
		return 1;
	return 0;
	
}
int TestaDiagonalPrincipal(int numJogadas){
	
	int hit=0;
	
	for(int i=0,l=0;i<3;i++,l++){
			
		if(numJogadas%2==0){
			if(jogo[i][l]=='X')
				hit++;
			else
				hit=0;
		}
		else{
			if(jogo[i][l]=='O')
				hit++;
			else
				hit=0;
		}	
	}
	if(hit==3)
		return 1;
	
	return 0;
	
}
int TestaDiagonalSecundaria(int numJogadas){
	
	int hit=0;
	
	for(int i=0,l=2;i<3;i++,l--){
		
		if(numJogadas%2==0){
			if(jogo[i][l]=='X')
				hit++;
			else
				hit=0;
		}
		else{
			if(jogo[i][l]=='O')
				hit++;
			else
				hit=0;
		}		
	}
	if(hit==3)
		return 1;
	
	return 0;
	
}
