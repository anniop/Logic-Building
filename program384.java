import java.util.*;

class program384
{
    public static void main(String Google[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String  : ");
        String str = sobj.nextLine(); 

        StringBuffer sb = new StringBuffer(str);

        sb = sb.reverse();

        System.out.println("The reversed string is : "+sb);

    }    
}
