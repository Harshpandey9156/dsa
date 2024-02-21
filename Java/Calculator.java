package Java;

import java.util.Scanner;

public class Calculator {
    public static void main(String[] args) {
        Scanner in =new Scanner(System.in);
        System.out.print("enter the Operator");
        char op=in.next().trim().charAt(0);
        int ans =0;
        if(op=='+' ||op=='-'||op=='%' ||op =='/'||op=='*'){
                int num=in.nextInt();
                int num2=in.nextInt();

            if(op=='+'){
                ans=num+num2;

            }
            if(op=='-'){
                ans=num-num2;

            }
            if(op=='%'){
                ans=num%num2;

            }
            if(op=='*'){
                ans=num*num2;

            }
            if(op=='/'){
                if(num2!=0){
                ans=num/num2;
                }

            }



        }
        System.out.println(ans);
        

    }
    
}
