import java.util.*;

class program381
{
    public static void main(String Google[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String  : ");
        String str = sobj.nextLine(); 

        System.out.println("Enter the character that you want to search : ");
        String s = sobj.nextLine();

        char ch = s.charAt(0);

        System.out.println("Entered character is : "+ ch);

        char Arr[] = str.toCharArray();
        int iCnt = 0;
        int i = 0;

        for(i = 0;i < Arr.length;i++)
        {
            if(Arr[i] == ch)
            {
                iCnt++;
            }
        }

        System.out.println("Frequency of that character is : "+iCnt);

    }    
}
