import java.util.*;

class program369
{
    public static void main(String Google[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String  : ");
        String str = sobj.nextLine();   
        
        System.out.println("String before replacement : "+str);
        
        str = str.replaceAll("a", "z");

        System.out.println("String after replacement : "+str);
    }    
}
