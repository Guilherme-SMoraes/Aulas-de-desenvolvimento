package exercicio2;
import java.util.Scanner;

public class Exercicio2 {

    public static void main(String[] args) {
        
        Scanner s=new Scanner(System.in);
        int num;
        
        // TODO code application logic here
        
        System.out.println("Digite um valor");
        num=s.nextInt();
        System.out.println("Seu número: "+num);
        num-=1;
        System.out.println("O antecessor de seu número: "+num);
        num+=2;
        System.out.println("O sucessor de seu número: "+num);

    }
    
}
