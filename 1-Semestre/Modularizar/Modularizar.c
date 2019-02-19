#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	int rodando = 1 ,i=0, j=0;
	char player1[15];
	char player2[15];
	char board[3][3];
	int jogadaValida=0;
	int playerAtual=0;
	int empate=9;
	
	IniciaBoard(board);
	
	RecebeNome(player1,player2);
	
	while (rodando == 1){
		
		//mostrar jogo atual
		MostrarJogo(board);
		
		//fazer jogada
		playerAtual=FazerJogada(playerAtual,player1,player2,board);
		empate--;
		
		rodando=VerificaGanhador(board);
		
		if(rodando == 0){
			printf("\n Fim de jogo! PARABENS!\n");
			for(i=0; i<3;i++){
				for(j=0; j<3;j++){
					printf("|%c|",board[i][j]);
				}
			printf("\n");
			}
		}else if(empate == 0){
			printf("\n JOGO EMPATADO\n");
			rodando == 0;
		}
	
	
	
	}
	return;
}
void IniciaBoard(char board[][3]){
	
	int i=0,j=0;
	
	for(i=0; i<3;i++){
		for(j=0; j<3;j++){
			board[i][j] = ' ';
		}
	}	
	
	
}
void RecebeNome(char player1[],char player2[]){
	
	printf("Digite o nome do jogador 1 - X: ");
	scanf("%s", player1);	
	printf("Digite o nome do jogador 2 - O: ");
	scanf("%s", player2);
	
	return;
	
}
void MostrarJogo(char board[][3]){
	
	int i,j;
	
	for(i=0; i<3;i++){
		for(j=0; j<3;j++){
			printf("|%c|",board[i][j]);
		}
		printf("\n");
	}
	
	return;
	
}
int FazerJogada(int *playerAtual,char player1[],char player2[],char board[][3]){
	
	int jogadalin, jogadacol;
	
	printf("\n Sua Vez de Jogar %s", playerAtual==0 ? player1:player2);
	
	int jogadaValida = 0;
	while (jogadaValida == 0){
		printf("\n Escolha a linha e a coluna: ");
		scanf("%d,%d",&jogadalin,&jogadacol);
	
		if(board[jogadalin-1][jogadacol-1]== ' '){
			if(playerAtual==0){
				board[jogadalin-1][jogadacol-1]= 'X';
				return 1;
			}
			else{
				board[jogadalin-1][jogadacol-1]= 'O';
				return 0;
			}
			jogadaValida=1;
		}else {
			printf("\n Voce nao pode jogar ai");
		}
	}
	
}
int VerificaGanhador(char board[][3]){
	
	if(TestaLinha(board)==0)
		return 0;
	if(TestaColuna(board)==0)
		return 0;
	if(TesteDiagonalPrin(board)==0)
		return 0;
	if(TestaDiagonalSec(board)==0)
		return 0;
		
	return 1;
	
}
int TestaLinha(char board[][3]){
	
	int i,j,hit=0;
	
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			if (board[i][j]==board[i][j+1])
				hit++;
			else
				hit=0;
		}
		if(board[i][2] != ' ')
			hit++;
		else
			hit=0;
			
		if(hit==3)
			return 0;			
	}
	
	return 1;
		
}
int TestaColuna(char board[][3]){
	
	int i,j,hit=0;
	
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			if (board[j][i]==board[j][i+1])
				hit++;
			else
				hit=0;
		}
		if(board[2][i] != ' ')
			hit++;
		else
			hit=0;
			
		if(hit==3)
			return 0;			
	}
	
	return 1;
	
}
int TestaDiagonalPrin(char board[][3]){
	
	int i,j,hit=0;
	
	for(i=0,j=0;i<2;i++,j++){
		
		if (board[i][j]==board[i+1][j+1])
			hit++;
		else
			hit=0;
		
	}
	if(board[2][2] != ' ')
		hit++;
	
	if(hit==3)
		return 0;
	
	return 1;
	
}
int TestaDiagonalSec(char board[][3]){
	
	int i,j,hit=0;
	
	for(i=0,j=2;i<2;i++,j--){
		
		if (board[i][j]==board[i+1][j-1])
			hit++;
		else
			hit=0;
		
	}
	if(board[0][2] != ' ')
		hit++;
	
	if(hit==3)
		return 0;
	
	return 1;
	
}

