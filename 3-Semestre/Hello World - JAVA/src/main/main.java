package main;

import java.util.Scanner;

public class main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		 int i,j,op;
		 Scanner scan = new Scanner(System.in);
		 
		 System.out.println("Digite um número");
		 i=scan.nextInt();
		 System.out.println("Digite a operação desejada");
		 System.out.println("1-Soma");
		 System.out.println("2-Subtração");
		 System.out.println("3-Multiplicação");
		 System.out.println("4-Divisão");
		 op=scan.nextInt();
		 System.out.println("Digite um outro número");
		 j=scan.nextInt();
		 
		 switch(op) {
		 
		 case 1:
			 i+=j;
			 break;
		 case 2:
			 i-=j;
			 break;
		 case 3:
			 i*=j;
			 break;
		 case 4:
			 i/=j;
			 break;
		 default:
			 System.out.println("Digite uma opção valida");
			 return;

		 }
		 
		 System.out.println("O resultado é "+i);

	}

}
