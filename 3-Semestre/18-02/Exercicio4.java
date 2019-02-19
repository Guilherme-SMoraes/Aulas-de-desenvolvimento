package exercicio4;

import java.util.Scanner;

public class Exercicio4 {

    
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner s=new Scanner(System.in);
        
        
        System.out.println("Digite o nome do aluno");
        
        
    }
    
}
class Aluno{
    
    String Nome;
    int nota1,nota2,nota3,idade;
   
    Aluno(String nome,int nota1,int nota2,int nota3,int idade){
    
        this.Nome=nome;
        this.nota1=nota1;
        this.nota2=nota2;
        this.nota3=nota3;
        this.idade=idade;
    
    }

}