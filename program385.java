import java.util.*;

class program385
{
    public static void main(String Google[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String  : ");
        String str = sobj.nextLine(); 

        str = str.trim();
        str = str.replace("\\s+", " ");

        String Arr[] = str.split(" ");

        StringBuffer temp = null;
        StringBuffer finalstr = null;

        for(String s : Arr)
        {
            temp = new StringBuffer(s);
            temp = temp.reverse();

            System.out.println(temp);
        }

    }    
}
