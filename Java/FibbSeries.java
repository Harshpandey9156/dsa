package Java;

import java.util.Scanner;

public class FibbSeries {
    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        int a=in.nextInt();
        int b=0;
        int c=1;
        int count=2;

         while (count<=a) {
            int temp=c;
            c=b+c;
            b=temp;
            count++;
            
         }
         System.out.println(c);

    }
    
}
