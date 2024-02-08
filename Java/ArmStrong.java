package Java;

import java.util.Scanner;

public class ArmStrong {
    public static void main(String[] args) {
        Scanner in= new Scanner(System.in);
        int a =in.nextInt();
        // int num;
        //  num=Arm(a);
        // System.out.println(Arm(a));
        Arm(a);
        
    }

    static void Arm(int num){
       int sum=0;
        while(num>0){
            int a=num%10;
            sum=a*a+sum;
            num=num/10;
            
            // System.out.println("num");
            
        }
        System.out.print(sum);
        
        
    }
}
