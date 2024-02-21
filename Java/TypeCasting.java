package Java;

import java.util.Scanner;

public class TypeCasting {
    public static void main(String[] args) {
        Scanner input=new Scanner(System.in);
        Float  num= input.nextFloat();
        System.out.println(num);

        //converting the integer to float
        int numn=(int)(23.13f);
        System.out.println(numn);

        int a=259;
        byte b= (byte)(a);

        System.out.println(b);

        byte d=30;
        byte c=60;
        byte g=100;
        int  f= d*c/ g;
        System.out.println(f);

        




    }
    
}
