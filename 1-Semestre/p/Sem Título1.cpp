#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc,char *argv[]){
	
	setlocale(LC_ALL,"Portuguese");
	
	int a=0,b=0,c=0;
	
	scanf("%d/%d/%d",&a,&b,&c);
	printf("%d %d %d\n",a,b,c);
	
	
	
	return 0;
}
