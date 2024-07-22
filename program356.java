import java.util.*;

class Matrix
{
    public int iRow;
    public int iCol;
    public int Arr[][];
    Scanner sobj = new Scanner(System.in);
    public Matrix(int A , int B)
    {
        this.iRow = A;
        this.iCol = B;

        Arr = new int[iRow][iCol];
    }
        int i,j;
        public void Accept()
        {
            for(i = 0;i < iRow;i++)
        {
            for(j = 0; j < iCol ; j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }
        }

        public void Display()
        {   
            System.out.println("Elements From the matrix :");
            for(i = 0;i < iRow;i++)
            {
                for(j = 0; j < iCol ; j++)
                {
                    System.out.print(Arr[i][j]+ "\t");
                }
                System.out.println();
            }
        }

        public int Summation()
        {
            int iSum = 0;
            int i = 0;
            int j = 0;
            for(i = 0;i<iRow;i++)
            {
                for(j = 0;j<iCol;j++)
                {
                    iSum = iSum + Arr[i][j];
                }
            }
            return iSum;
        }
}

class program356
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

        Matrix mobj = new Matrix(iNo1, iNo2);

        mobj.Accept();
        mobj.Display();
        int iRet = 0;
        iRet = mobj.Summation();
        System.out.println("Summation is : " + iRet);
       
       
    }
}