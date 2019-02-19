/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
import java.util.Scanner;
/**
 *
 * @author Aluno
 */
public class Exercicio1 {
    public static void main(String[] args) {
        
        float saldo;
        double saldo_r;
        int op=0;
        
        Scanner s=new Scanner(System.in);
        System.out.println("Digite o saldo atual:");
        saldo=s.nextFloat();
        
        do{
        
            System.out.println("Digite a operação desejada:");
            System.out.println("1-Mostra Saldo");
            System.out.println("2-Mostra Saldo com Reajuste");
            System.out.println("    0-Sair");
            op=s.nextInt();
            
            switch(op){
                
                case 1:
                    System.out.println("Seu saldo Ã© "+saldo);
                    break;
                case 2:
                    saldo_r=saldo*1.05;
                    System.out.println("Seu saldo com reajuste Ã© "+saldo_r);
                    break;
                case 0:
                    System.out.println("Tchau!!!");
            
            }
            
        }while(op!=0);
        
    }
}
