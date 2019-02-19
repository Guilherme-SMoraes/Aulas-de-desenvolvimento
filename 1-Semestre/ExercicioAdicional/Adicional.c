#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int num1=0,num2=0,num3=0,troca=0;
	
	printf("Digite o primeiro número\n");
	scanf("%d",&num1);
	printf("Digite segundo número\n");
	scanf("%d",&num2);
	printf("Digite terceiro número\n");
	scanf("%d",&num3);
	
	if(num1<num2){
		troca=num1;
		num1=num2;
		num2=troca;
	}
	if(num1<num3){
		troca=num1;
		num1=num3;
		num3=troca;
	}
	if(num2<num3){
		troca=num2;
		num2=num3;
		num3=troca;
	}
	printf("Crescente: %d %d %d\n",num1,num2,num3);
	printf("Decrescente: %d %d %d",num3,num2,num1);
	
	
	return 0;
}
