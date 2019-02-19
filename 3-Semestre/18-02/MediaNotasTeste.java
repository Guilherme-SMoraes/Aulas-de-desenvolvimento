package medianotasteste;

import java.util.Scanner;

public class MediaNotasTeste {
    
    public static int resultadoMedia(int nota1,int nota2,int nota3){
        return (nota1+nota2+nota3)/3;
    }
    
    public static void main(String[] args) {
        
        Scanner s=new Scanner(System.in);
        int nota1,nota2,nota3,media;
        
        // TODO code application logic here
        
        System.out.println("Digite a 1ª nota");
        nota1=s.nextInt();
        System.out.println("Digite a 2ª nota");
        nota2=s.nextInt();
        System.out.println("Digite a 3ª nota");
        nota3=s.nextInt();
        
        media=resultadoMedia(nota1,nota2,nota3);
        
        System.out.println("("+nota1+"+"+nota2+"+"+nota3+")/3="+media);
        
    }
    
    
    
}
