#include <iostream>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	char palavras[255]={};
	int numPalavras=1;
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("Digite um texto:\n");
	gets(palavras);
	fflush(stdin);
	
	for(int i=0;palavras[i]!='\0';i++){
		if(palavras[i]==' ')
			numPalavras++;
	}
	
	printf("O texto digitado tem %d palavras",numPalavras);
	
	return 0;
}
