package Java;

import java.util.Scanner;

public class Function {

 
    public static void main(String[] args) {
       sum();

    }

   static void  sum(){
    System.out.println("enter the number");
    Scanner in= new Scanner(System.in);
    int a= in.nextInt();
    int b=in.nextInt();
    int sum =a+b;
    

    System.out.println(+sum);
    

    }
    
}
