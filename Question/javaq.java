import java.util.*;
public class javaq 
{ 
    public static void main(String args[]) 
    {   
        Scanner sc = new Scanner(System.in); 
        int n;    
        

        System.out.println(" total subjects ");
        n=sc.nextInt();
        

        int arr[] = new int[n]; 
        System.out.println(" marks in each subject ");
        for(int i=0;i<n;i++)   
        {
            arr[i]=sc.nextInt();
            
        }
        
        int total=0;

        for(int i=0;i<n;i++)
        {
            total=total+arr[i];

        }
        
        System.out.println(" total marks is "+total);
         

        float percentage; 
        percentage = (total / (float)n); 
        System.out.println("Grade :");
        if(percentage>90){
            System.out.println(" A");
        }
        else if(percentage>80 && percentage<=90){
            System.out.println(" B");
        }
        else if(percentage>70 && percentage<=80){
            System.out.println(" C");
        }
        else if(percentage>60 && percentage<=70){
            System.out.println(" D");}
        else if(percentage<50){
            System.out.println(" Fail");
        }
 
        System.out.println( "Total Percentage : " + percentage + "%");                         
    }   
}