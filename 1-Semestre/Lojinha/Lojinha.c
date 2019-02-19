#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int produto1=0,produto2=0,produto3=0,produto4=0,entrada=0,cod=0;
	
	//Programa feito por:
	//Guilherme dos Santos Moraes
	//Larissa da Silva Oliveira	
	
	setlocale(LC_ALL,"Portuguese");
	
	do{
		
		printf("Digite o número referente a opção desejada\n");
		printf("1-Visualizar os produtos;\n");
		printf("2-Comprar produtos\n");
		printf("3-Visualizar carrinho\n");
		printf("4-Apagar produto do carrinho\n");
		printf("5-Sair\n");
		scanf("%d",&entrada);
		
		switch(entrada){
			
			case 1:
				
				printf("\n=============================================\n");
				printf("=   1: Guaraviton R$3,50                    =\n");
				printf("=   2: Água R$2,50                          =\n");
				printf("=   3: Pepsi R$4,00                         =\n");
				printf("=   4: Dolly R$3,00                         =\n");
				printf("=   5: Doritos R$4,00                       =\n");
				printf("=   6: Cheetos R$2,50                       =\n");
				printf("=   7: Fofura R$2,00                        =\n");
				printf("=   8: Ruffles R$3,50                       =");
				printf("\n=============================================\n");
				
				printf("Aperte enter para voltar as opções\n");
				getch();
				system("cls");
				
			break;
			
			case 2:
				
				system("cls");
				printf("Digite o código do produto\n");
				scanf("%d",&cod);
				
				if((cod<1)||(cod>8)){
					printf("Digite um código existente");
					break;
				}
				if(produto1==0){
					produto1=cod;
					break;
				}
				if(produto2==0){
					produto2=cod;
					break;
				}
				if(produto3==0){
					produto3=cod;
					break;
				}
				if(produto4==0){
					produto4=cod;
					break;
				}
				
				printf("Carrinho cheio");
				system("cls");
			
			break;
			
			case 3:
				
				if (produto1!=0)
					Carrinho(produto1,1);
					
				if(produto2!=0)
					Carrinho(produto2,2);
					
				if(produto3!=0)
					Carrinho(produto3,3);
					
				if(produto4!=0)
					Carrinho(produto4,4);
				
				printf("Aperte enter para voltar as opções\n");
				getch();
				system("cls");
				
			break;
				
			case 4:
				printf("Digite o código do produto do carrinho que você deseja apagar da lista\n");
				scanf("%d",&cod);
				if (produto1==cod){
					produto1=0;
					printf("Produto apagado com sucesso\n");
					break;
				}
				if (produto2==cod){
					produto2=0;
					printf("Produto apagado com sucesso\n");
					break;
				}
				if (produto3==cod){
					produto3=0;
					printf("Produto apagado com sucesso\n");
					break;
				}
				if (produto4==cod){
					produto4=0;
					printf("Produto apagado com sucesso\n");
					break;
				}
				if(cod<1 || cod >8){
					printf("Digite um código válido");
					break;
				}
				printf("Produto não encontrado");
				
			break;
			case 5:
				
				printf("Deseja mesmo sair?\n");
				printf("0-Não     1-Sim\n");
				scanf("%d",&cod);
				
				if(cod==0)
					entrada=0;
					
			default:
				printf("Digite um código válido");
				
		}
		
	}while(entrada!=5);	
	
	
	return 0;
}
void Carrinho(int produto){
	
	switch(produto){
		
		case 1:
			printf("1-Guaraviton\n");
		break;
		
		case 2:
			printf("2-Água\n");
		break;
		
		case 3:
			printf("3-Pepsi\n");
		break;
		
		case 4:
			printf("4-Dolly\n");
		break;
		
		case 5:
			printf("5-Doritos\n");
		break;
		
		case 6:
			printf("6-Cheetos\n");
		break;
		
		case 7:
			printf("7-Fofura\n");
		break;
		
		case 8:
			printf("8-Ruffles\n");
		break;
		
	}
	
}
