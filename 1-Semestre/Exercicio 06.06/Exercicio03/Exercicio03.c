#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int QuantosDias(int anos,int meses,int dias);

int main(int argc, char *argv[]) {
	
	int anos=0,meses=0,dias=0;
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("Digite quantos anos, meses e dias você tem\n");
	scanf("%d",&anos);
	scanf("%d",&meses);
	scanf("%d",&dias);
	
	printf("Você tem %d dias de vida",QuantosDias(anos,meses,dias));
	
	return 0;
}
int QuantosDias(int anos,int meses,int dias){
	
	return (anos*365)+(meses*30)+dias;
	
}

