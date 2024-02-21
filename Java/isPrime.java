package Java;

import java.util.Scanner;

public class isPrime {
    
    public static void main(String[] args) {
        
        Scanner in =new Scanner(System.in);
        
        int num=in.nextInt();
        boolean ans=isPrimeN(num);
        System.out.println(ans);


        
    }
    static boolean isPrimeN (int num){
        if(num<=1){
        return false;
        }
        int c=2;
        while(c*c<=num){
            if (num%c==0) {
                return false;
                
            }

        }
        return true;


    }
}
