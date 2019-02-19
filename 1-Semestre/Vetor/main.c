#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"Portuguese");
	
	Exercicio03();
	
	return 0;
}
void Exercicio01(){
	
	char c[100]={},d[100]={};
	
	printf("Digite um texto\n");
	gets(c);
	
	for(int i=0;c[i]!='\0';i++)
		d[i]=c[i];
			
	printf("%s\n",d);
	printf("%s",c);
	
	return;
}
void Exercicio02(){
	
	int i=0;
	char c[100]={};
	
	printf("Digite um texto\n");
	gets(c);
	
	for(i=0;c[i]!='\0';i++){}
		
	printf("O texto em %d caracteres\n", i);
	
	return;	
}
void Exercicio03(){
	
	char c[100]={},d[100]={};
	
	printf("Digite um texto\n");
	gets(c);
	for(int i=0,k=strlen(c)-1;i<strlen(c);i++,k--){
		d[i]=c[k];		
	}
	printf("%s",d);
	
}
void Exercicio04(){
	
	int vogal=0, consoante=0;
	char c[100]={};
	
	printf("Digite um texto\n");
	gets(c);
	for(int i=0;c[i]!='\0';i++){
		
		if(c[i]==' '){}
		
		else if((c[i]=='a')||(c[i]=='A')||(c[i]=='e')||(c[i]=='E')||(c[i]=='i')||(c[i]=='I')||(c[i]=='o')||(c[i]=='O')||(c[i]=='u')||(c[i]=='U'))
			vogal++;
			
		else 
			consoante++;		
			
	}
	
	printf("Vogais: %d\nConsoante: %d",vogal,consoante);
	
	return;
	
}
void Exercicio05(){
	
	char c[100]={},d[100];
	
	printf("Digite uma palavra\n");
	scanf("%s",c);
	
	for(int i=0,k=strlen(c)-1;i<strlen(c);i++,k--){
		d[i]=c[k];		
	}
	for(int i=0;c[i]!='\0';i++){
		if(d[i]!=c[i]){
			printf("A palavra não é um palíndromo");
			return;	
		}
	}		
	
	printf("A palavra é um palíndromo");
	
}
