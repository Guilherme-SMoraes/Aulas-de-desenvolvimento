#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int num1=0,num2=0;
	
	printf("Digite um número\n");
	scanf("%d",&num1);
	printf("Digite outro número\n");
	scanf("%d",&num2);
	
	if((num1<0)&&(num2<0)){
		printf("Positivo");
		return 0;
	}
	if((num1<0)||(num2<0)){
		printf("Negativo");
		return 0;
	}
	printf("Positivo");
	
	return 0;
}
