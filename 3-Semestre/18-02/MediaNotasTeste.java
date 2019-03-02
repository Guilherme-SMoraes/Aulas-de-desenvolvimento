package medianotasteste;

import java.util.Scanner;




public class MediaNotasTeste {
    
    public static int resultadoMedia(Aluno a){
        int media=(a.nota1+a.nota2+a.nota3)/3;
        System.out.println("("+a.nota1+"+"+a.nota2+"+"+a.nota3+")/3="+media);
        if(media>7){
            System.out.println("O aluno "+a.Nome+" foi aprovado");
        }else{
            System.out.println("O aluno "+a.Nome+" foi reprovado");
        }
        return media;
    }
     
    public static void main(String[] args) {
        
       
        
        // TODO code application logic here
        processamentoDadosAlunos();
        
        
    }
    
    public static void processamentoDadosAlunos(){
    
        Aluno aluno1 = new Aluno("Jo�o");
        resultadoMedia(aluno1);
        Aluno aluno2 = new Aluno("Maria");
        resultadoMedia(aluno2);
        Aluno aluno3 = new Aluno("Rafael");
        resultadoMedia(aluno3);
        Aluno aluno4 = new Aluno("Natalia");
        resultadoMedia(aluno4);
        Aluno aluno5 = new Aluno("Marcos");
        resultadoMedia(aluno5);
              
    
    }
    
}
class Aluno{
    
    String Nome;
    int nota1,nota2,nota3,idade;
   
    Aluno(String nome){
        
        Scanner s=new Scanner(System.in);
        System.out.println("Digite a 1ª nota");
        this.nota1=s.nextInt();
        System.out.println("Digite a 2ª nota");
        this.nota2=s.nextInt();
        System.out.println("Digite a 3ª nota");
        this.nota3=s.nextInt();
        System.out.println("Digite a idade");
        this.idade=s.nextInt();
        
        this.Nome=nome;
        
    }

}