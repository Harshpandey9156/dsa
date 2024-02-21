package Java;

import java.util.Scanner;

public class Occurance {
    public static void main(String[] args) {
        Scanner in =new Scanner(System.in);
        System.out.println("enter The Number");
        int a=in.nextInt(); 
        int count=0;
        int b=in.nextInt();
        while(a>0){
            if (a%10==b)
            count++;
            a=a/10;
            
            
        }
        System.out.println(count);


    }

    
}
