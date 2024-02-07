package Java;

import java.util.Scanner;

public class largestNum {
    public static void main(String[]args){
        Scanner input= new Scanner(System.in);
        int num=input.nextInt();
        int num1=input.nextInt();
        int num2=input.nextInt();

        // int max=num;

        // if(num>num1 && num>num2)
        // max=num;
        // else if (num1>num && num1>num2){
        //     max=num;
        // }
        // else{
        //     max=num;
        // }
        // System.out.println( "max value is " +max);

        int maxx=Math.max(num,Math.max(num1, num2));
        System.out.println(maxx);

    }
    
}
