#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int FazerMedia(int nota1,int nota2,int nota3,char op);

int main(int argc, char *argv[]) {
	
	int nota1=0,nota2=0,nota3=0;
	char operacao;
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("Digite a primeira nota\n");
	scanf("%d",&nota1);
	printf("Digite a segunda nota\n");
	scanf("%d",&nota2);
	printf("Digite a terceira nota\n");
	scanf("%d",&nota3);
	do{
		printf("Digite a operação desejada\n");
		scanf(" %c",&operacao);
	}while(operacao!='A'&&operacao!='a'&&operacao!='P'&&operacao!='p');
	
	printf("A média das notas é %d",FazerMedia(nota1,nota2,nota3,operacao));
	
	return 0;
}
int FazerMedia(int nota1,int nota2,int nota3,char op){
	
	if(op=='A'||op=='a')		
		return (nota1+nota2+nota3)/3;
		
	if(op=='P'||op=='p')
		return (nota1*.5)+(nota2*.3)+(nota3*.2);
		
	return 0;
	
}
