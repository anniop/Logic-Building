import java.util.*;

class program373
{
    public static void main(String Google[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String  : ");
        String str = sobj.nextLine(); 

        String Arr[] = str.split(" ");
        System.out.println("Words from the string are : ");
        
        int i = 0;
        for(String s : Arr)     // For Each loop in java.
        {
            System.out.println(s);
        }
    }    
}
