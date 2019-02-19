#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"Portuguese");
	
	//Coloque a função referente ao exercicio abaixo
	Exercicio22();
	
	return 0;
}

void Exercicio01(){
	
	int n1=0, antecessor=0;
	
	printf("Digite um número \n");
	scanf("%d", &n1);
	
	antecessor=n1-1;
	
	printf("O antecessor do número digitado é: %d", antecessor);
	
}
void Exercicio02(){
	
	float base=0, altura=0, area=0;
	
	printf("Digite a base do retângulo \n");
	scanf("%f", &base);
	printf("Digite a altura do retângulo \n");
	scanf("%f", &altura);
	
	area=base*altura;
	
	printf("A área do retangulo é: %.2f", area);
	
}
void Exercicio03(){
	
	int idade=0,  mes=0, dia=0, idade_dias=0;
	
	printf("Digite a sua idade \n");
	scanf("%d", &idade);
	printf("Digite o mês atual \n");
	scanf("%d", &mes);
	printf("Digite o dia atual \n");
	scanf("%d", &dia);
	
	idade_dias=((idade*365)+(mes*30)+dia);
	
	printf("Sua idade expressa em dias é: %d", idade_dias);
	
}
void Exercicio04(){
	
	float custoFabrica=0, custoConsumidor=0;
	
	printf("Digite o custo de fabrica \n");
	scanf("%f", &custoFabrica);
	
	custoConsumidor=custoFabrica+(custoFabrica*0.73);
	
	printf("O valor final é: %.2f", custoConsumidor);
	
}
void Exercicio05(){
	
	float temp_celcius=0, temp_fahrenheit=0;
	
	printf("Digite a temperatura em celcius \n");
	scanf("%f", &temp_celcius);
	
	temp_fahrenheit=(9*temp_celcius+160)/5;
	
	printf("A temperatura em fahrenheit é: %.2f", temp_fahrenheit);
	
}
void Exercicio06(){
	
	float conversao=0, dolar=0, cotacao=0;
	
	printf("Digite o valor da cotação \n");
	scanf("%f", &cotacao);
	printf("Digite a quantidade de dólares \n");
	scanf("%f", &dolar);
	
	conversao=dolar*cotacao;
	
	printf("O valor da conversão é: %.2f", conversao);
	
}
void Exercicio07(){
	
	int A=0,B=0;
	
	printf("Digite um número\n");
	scanf("%d",&A);
	printf("Digite outro número\n");
	scanf("%d",&B);
	
	if(A>=B)
		printf("O maior é %d",A);
	else
		printf("O maior é %d",B);
	
}
void Exercicio08(){
	
	int N=0;
	
	printf("Digite um número\n");
	scanf("%d",&N);
	
	if(N<=10)
		printf("F1");
		
	else if(N<=100)
		printf("F2");
		
	else
		printf("F3");
		
	
}
void Exercicio09(){
	
	int ano_atual=0,ano_nascimento=0,idade=0;
	
	printf("Digite seu ano de nascimento\n");
	scanf("%d",&ano_atual);
	printf("Digite o ano atual\n");
	scanf("%d",&ano_nascimento);
	
	idade=ano_atual-ano_nascimento;
	
	if(idade<16)
		printf("Você não pode votar");
	
	else
		printf("Você pode votar");
	
}
void Exercicio10(){
	
	float salario_fixo=0,total_vendas=0,salario_final=0;
	
	printf("Digite o salario fixo\n");
	scanf("%f",&salario_fixo);
	printf("Digite o total das vendas desse vendedor\n");
	scanf("%f",&total_vendas);
	
	salario_final=salario_fixo+(total_vendas*.3);
	
	if(total_vendas>1500)
		salario_final+=(total_vendas-1500)*.5;
		
	printf("O salario final desse funcionário é de R$%.2f",salario_final);
	
}
void Exercicio11(){
	
	int conta_cliente=0;
	float saldo=0,debito=0,credito=0,saldo_final=0;
	
	printf("Digite o número da conta\n");
	scanf("%d",&conta_cliente);
	printf("Digite o saldo");
	scanf("%f",&saldo);
	printf("Digite o débito da conta\n");
	scanf("%f",&debito);
	printf("Digite o crédito da conta\n");
	scanf("%f",&credito);
	
	saldo_final=saldo-debito+credito;
	
	printf("O seu saldo final é de R$%.2f\n",saldo_final);
	
	if(saldo_final<0)
		printf("O Seu saldo está NEGATIVO");
		
	else
		printf("O seu saldo está POSITIVO");
	
	
}
void Exercicio12(){
	
	int num1=0,num2=0,num3=0;
	
	printf("Digite o primeiro número\n");
	scanf("%d",&num1);
	printf("Digite o segundo número\n");
	scanf("%d",&num2);
	printf("Digite o terceiro número\n");
	scanf("%d",&num3);
	
	if((num1>num2)&&(num1>num3))
		printf("O maior é %d",num1);
		
	else if((num2>num1)&&(num2>num3))
		printf("O maior é %d",num2);
		
		else
			printf("O maior é %d",num3);

}
void Exercicio13(){
	
	int num1=0,num2=0;
	
	printf("Digite um número\n");
	scanf("%d",&num1);
	printf("Digite outro número\n");
	scanf("%d",&num2);
	
	if(num1==num2)
		printf("Números iguais");
	
	else if(num1>num2)
		printf("Primeiro é maior");
		
		else
			printf("Segundo é maior");
	
}
void Exercicio14(){
	
	int tipo_combustivel=0;
	float litros=0, preco_combustivel=0,preco_final=0;
	
	printf("Digite o tipo de combustivel que você desja usar para abastecer\n");
	printf("1-Álcool      |      2-Gasolina\n");
	scanf("%d",&tipo_combustivel);
	printf("Quantos litros de combustivel você quer?\n");
	scanf("%f",&litros);
	
	if(tipo_combustivel==1){
		
		if(litros<=20)
			preco_final=litros*(2.9-(2.9*.03));
		
		else
			preco_final=litros*(2.9-(2.9*.05));
			
	}
	else if(tipo_combustivel==2){
		
		if(litros<=20)
			preco_final=litros*(3.3-(3.3*.04));
		
		else
			preco_final=litros*(3.3-(3.3*.06));
			
	}
	else{
		printf("Tipo de combustivel invalido");
		return;
	}
	printf("O valor do combustivel é R$%.2f",preco_final);
	
}
void Exercicio15(){
	
	float nota1=0,nota2=0,nota3=0,media=0;
	
	printf("Digite a primeira nota\n");
	scanf("%f",&nota1);
	printf("Digite a segunda nota\n");
	scanf("%f",&nota2);
	printf("Digite a terceira nota\n");
	scanf("%f",&nota3);
	
	media=(nota1+nota2+nota3)/3;
	
	if(media<6)
		printf("Conceito: D");
		
	else if(media<7.5)
		printf("Conceito: C");
		
	else if(media<9)
		printf("Conceito: B");
		
	else
		printf("Conceito: A");	
	
}
void Exercicio16(){
	
	int num_empregado=0,ano_nascimento=0,ano_ingresso=0,idade=0,tempo_trabalhado=0,ano_atual=0;
	
	printf("Digite o número do empregado\n");
	scanf("%d",&num_empregado);
	printf("Digite o ano de nascimento do empregado\n");
	scanf("%d",&ano_nascimento);
	printf("Digite o ano de ingresso do empregado\n");	
	scanf("%d",&ano_ingresso);
	printf("Digite o ano atual\n");
	scanf("%d",&ano_atual);
	
	idade=ano_atual-ano_nascimento;
	tempo_trabalhado=ano_atual-ano_ingresso;
	
	if((idade>=65)||(tempo_trabalhado>=30))
		printf("Requerer aposentadoria");
	else if((idade>=60)&&(tempo_trabalhado>=25))
		printf("Requerer aposentadoria");
	else
		printf("Não requerer");
		
	
}
void Exercicio17(){
	
	char letra=' ';
	
	printf("Digite uma letra\n");
	scanf(" %c",&letra);
	
	switch(letra){
		case 'a':
			printf("Vogal");
			break;
		case 'e':
			printf("Vogal");
			break;
		case 'i':
			printf("Vogal");
			break;
		case 'o':
			printf("Vogal");
			break;
		case 'u':
			printf("Vogal");
			break;
		default:
			printf("Consoante");
	}
	
}
void Exercicio18(){
	
	float num1=0,num2=0,resul=0;
	char operador=' ';
	
	printf("Digite um número\n");
	scanf("%f",&num1);
	printf("Digite outro número\n");
	scanf("%f",&num2);
	printf("Digite o operador da seguinte tabela:\n");
	printf("+ Soma | - Subtração | * Multiplicação | / Divisão\n");
	scanf(" %c",&operador);
	
	switch(operador){
		case '+':
			resul=num1+num2;
			break;
		case '-':
			resul=num1-num2;
			break;
		case '*':
			resul=num1*num2;
			break;
		case '/':
			resul=num1/num2;
			break;
		default:
			printf("Operador não identificado");
	}
	printf("O resultado é %.2f",resul);
	
}
void Exercicio19(){
	
	int num=0;
	
	printf("Digite um número de 1 a 10\n");
	scanf("%d",&num);
	
	switch(num){
		
		case 1:
			printf("Um");
			break;
		case 2:
			printf("Dois");
			break;
		case 3:
			printf("Três");
			break;
		case 4:
			printf("Quatro");
			break;
		case 5:
			printf("Cinco");
			break;
		case 6:
			printf("Seis");
			break;
		case 7:
			printf("Sete");
			break;
		case 8:
			printf("Oito");
			break;
		case 9:
			printf("Nove");
			break;
		case 10:
			printf("Dez");
			break;
		default:
			printf("Não está entre 1 e 10");
	}
}
void Exercicio20(){
	
	int soma=0;
	
	for(int contador=1;contador<11;contador++){
		
		soma+=contador;
		
	}
	printf("A soma dos números de 1 a 10 é %d",soma);
	
}
void Exercicio21(){
	
	float altura=0,peso=0,maior_altura=0,peso_do_maior=0;
	
	for(int cont=0;cont<15;cont++){
		
		do{
			
			printf("Digite a altura da %dª pessoa\n",cont+1);
			scanf("%f",&altura);
			printf("Digite o peso dessa pessoa\n");
			scanf("%f",&peso);
			
			if((altura<=0)||(peso<=0)){
				
				printf("Digite um peso e altura validos\n");
				printf("-------------------------\n");
				
			}
			
		}while((altura<=0)||(peso<=0));
		
		printf("---------------------\n");
		
		if(cont==0){
			
			maior_altura=altura;
			peso_do_maior=peso;
			
		}
		
		else if(maior_altura<altura){
			
			maior_altura=altura;
			peso_do_maior=peso;
			
		}
		
	}
	
	printf("O peso da maior pessoa é %.2fKg",peso_do_maior);
	
}
void Exercicio22(){
	
	float num=0;
	int contador=0;
	
	printf("Digite um número\n");
	scanf("%f",&num);
	
	for(contador=0;num>=1;contador++){
		
		num/=2;
		
	}
	printf("Foram feitas %d divisões\n",contador);
	printf("O resuldado da ultima divisão foi %f",num);
	
}
void Exercicio23(){
	
	int idade=0,maior_idade=0,menor_idade=0,mulheres_salario_mil=0,contador=0;
	char sexo=' ';
	float salario=0,media_salario=0;
	
	do{
		
		printf("Digite a idade da pessoa\n");
		scanf("%d",&idade);
		
		if(idade<0)
			break;
		
		printf("Digite o sexo da pessoa\n");
		printf("M-Masculino    |    F-Feminino\n");
		scanf(" %c",&sexo);
		printf("Digite o sálario da pessoa\n");
		scanf("%f",&salario);
		
		media_salario+=salario;
		
		if(contador==0)
			menor_idade=maior_idade=idade;
		
		if(maior_idade<idade)		
			maior_idade=idade;
		
		if(menor_idade>idade)
			menor_idade=idade;
		
		if((sexo=='F')&&(salario<=1000))
			mulheres_salario_mil++;
		
		contador++;		
		
		printf("----------------------\n\n");
		
	}while(idade>=0);
	
	media_salario/=contador;
	
	printf("\nA média salarial da população é de R$%.2f\n",media_salario);
	printf("A pessoa de maior idade da população tem %d anos\n",maior_idade);
	printf("A pessoa de menor idade da população tem %d anos\n",menor_idade);
	printf("%d mulheres dessa população recebem um salário de até R$1000",mulheres_salario_mil);
	
}
void Exercicio24(){
	
	int FN=0,num1=0,num2=1,soma=0;
	
	do{
		
		printf("Digite um número maior ou igual a 2\n");
		scanf("%d",&FN);
		
	}while(FN<2);
	
	printf("0\n");
	printf("1\n");
	
	for(int contador=1;contador<FN;contador++){
		
		soma=num1+num2;
		num1=num2;
		num2=soma;
		
		printf("%d\n",soma);
	}
	
	
}
void Exercicio25(){
	
	int idade=0,media_idade=0,contador_idade=0,contador_altura=0;
	float altura=0,media_altura=0;
	
	for(int contador=0;contador<45;contador++){
		
		printf("Digite a idade do %dº aluno\n",contador+1);
		scanf("%d",&idade);
		printf("Digite a altura do aluno\n");
		scanf("%f",&altura);
		
		if(altura<1.7){
			media_idade+=idade;
			contador_idade++;
		}
		
		if(idade>20){
			media_altura+=altura;
			contador_altura++;
		}
		
		printf("----------------\n\n");
		
	}
	
	media_idade/=contador_idade;
	media_altura/=contador_altura;
	
	printf("A media de idade dos alunos com menos de 1,70m de altura é de %d anos\n",media_idade);
	printf("A media de altura dos alunos com mais de 20 anos é de %.2fm",media_altura);
	
}
//Exercicios Adicionais
void ExercicioAdd01(){
	
	int num1=0,num2=0,num3=0;
	
	printf("Digite um numero de duas casas\n");
	scanf("%d",&num1);
	
	num2=num1%10;
	num3=num1/10;
	
	printf("%d%d",num2,num3);
	
}
void ExercicioAdd02(){
	
	int a=0, b=0;
	
	a=(88+66)/2;
	b=88-a;
	
	if (a>b)
		printf("O maior número é: %d", a);
	
	else 
		printf("O maior número é: %d", b);
	
}
void ExercicioAdd03(){
	
	int num1=0,num2=0;
	
	printf("Digite um número\n");
	scanf("%d",&num1);
	printf("Digite outro número\n");
	scanf("%d",&num2);
	
	if((num1<0)&&(num2<0)){
		printf("Positivo");
		return;
	}
	if((num1<0)||(num2<0)){
		printf("Negativo");
		return;
	}
	printf("Positivo");
	
}
void ExercicioAdd04(){
	
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
	
}
