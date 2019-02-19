#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <strings.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"Portuguese");
	
	char nome[5][50]={};
	int vogal[5]={};
	
	for(int i=0;i<5;i++){
		nome[i][0]=i+1;
		printf("Digite o %dº nome\n",i+1);
		fflush(stdin);
		gets(nome[i]);		
	}
	for(int i=0;i<5;i++){
		for(int l=0;nome[i][l]!='\0';l++){
			
			switch(nome[i][l]){
				case 'a':
					vogal[0]++;
					break;
				case 'e':
					vogal[1]++;
					break;
				case 'i':
					vogal[2]++;
					break;
				case 'o':
					vogal[3]++;
					break;
				case 'u':
					vogal[4]++;
					break;
			}
			
		}
		
	}
	for(int i=0;i<5;i++){
		
		printf("%s\n",nome[i]);
	}
	printf("Os nomes tiveram %d a\n",vogal[0]);
	printf("Os nomes tiveram %d e\n",vogal[1]);
	printf("Os nomes tiveram %d i\n",vogal[2]);
	printf("Os nomes tiveram %d o\n",vogal[3]);
	printf("Os nomes tiveram %d u\n",vogal[4]);
	
		
	
	return 0;
}
