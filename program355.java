import java.util.*;

class Matrix
{

}

class program355
{
    public static void main(String Google[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number of Rows : ");

        int iNo1 = sobj.nextInt();

        System.out.println("Enter Number of columns : ");
        int iNo2 = sobj.nextInt();

        int Arr[][] = new int[iNo1][iNo2];
        System.out.println("Please Enter The Data : ");

        int i =0 , j = 0;

        for(i = 0;i < iNo1;i++)
        {
            for(j = 0; j < iNo2 ; j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }
        System.out.println("Elements From the matrix :");
        for(i = 0;i < iNo1;i++)
        {
            for(j = 0; j < iNo2 ; j++)
            {
                System.out.print(Arr[i][j]+ "\t");
            }
            System.out.println();
        }
    }
}