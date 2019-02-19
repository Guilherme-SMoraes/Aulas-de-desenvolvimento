#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <strings.h>

#define n 5

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int vetor[n]={},aux=0;
	
	for(int i=0;i<n;i++){
		
		printf("Digite o %dº valor\n",i+1);
		scanf("%d",&vetor[i]);
		
	}
	for(int i=0,l=n-1;i<l;i++,l--){
		
		aux=vetor[i];
		vetor[i]=vetor[l];
		vetor[l]=aux;
		
	}
	for(int i=0;i<n;i++){
		printf("%d\n",vetor[i]);
	}
	
	return 0;
}
