package Java;
import java.util.Scanner;

public class Inputs {
    public static void main(String[] args) {
        Scanner input= new Scanner(System.in);
        System.out.println("enter the umeber");
        int Rollno =input.nextInt();
        System.out.println( "Roll no is" + Rollno);


        String name=input.next();
        System.out.println(name);

        float Num=input.nextFloat();
        System.out.println(Num);
         
    }
    
}
