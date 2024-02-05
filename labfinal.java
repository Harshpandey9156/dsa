import java.io.*;
class labfinal
{
public static void main(String args[])throws IOException
{
        double x1,x2,disc,a,b,c;
        InputStreamReader obj=new InputStreamReader(System.in);
        BufferedReader br=new BufferedReader(obj);
        System.out.println("enter a,b,c values");
        a=Double.parseDouble(br.readLine());
        b=Double.parseDouble(br.readLine());
        c=Double.parseDouble(br.readLine());
        disc=(b*b)-(4*a*c);

        // disc=(b*c)
        
if(disc==0)
{
        System.out.println("roots are real and equal ");
        x1=x2=-b/(2*a);
        System.out.println("roots are "+x1+","+x2);

}
else if(disc>0)


{ 
        System.out.println("roots are real and unequal");
        x1=(-b+Math.sqrt(disc))/(2*a);
        x2=(-b-Math.sqrt(disc))/(2*a);
        System.out.println("roots are "+x1+","+x2);
        
        // System.out.println(" roots are imaginary");
}
else
{
        System.out.println("roots are imaginary");
}
}
}