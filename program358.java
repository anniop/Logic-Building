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
        public int maximun()
        {
            int iMax = 0;
            int i = 0;
            int j = 0;

            iMax = Arr[0][0];
            for(i = 0;i<iRow;i++)
            {
                for(j = 0;j<iCol;j++)
                {
                    if(iMax < Arr[i][j])
                    {
                        iMax = Arr[i][j];
                    }
                }
            }
            return iMax;
        }

        public int minimum()
        {
            int imin = 0;
            int i = 0;
            int j = 0;

            imin = Arr[0][0];
            for(i = 0;i<iRow;i++)
            {
                for(j = 0;j<iCol;j++)
                {
                    if(imin > Arr[i][j])
                    {
                        imin = Arr[i][j];
                    }
                }
            }
            return imin;
        }

        public void RowSum()
        {
            int iSum = 0;
            int i = 0;
            int j = 0;
            for(i = 0;i<iRow;i++)
            {
                for(j = 0,iSum = 0;j<iCol;j++)
                {
                   iSum = iSum + Arr[i][j];
                }
                System.out.println("Summation of all elemets from row no : " + i + " is : "+ iSum);
                iSum = 0;
            }
        }
}

class program358
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
        mobj.RowSum();
        int iRet = 0;
        iRet = mobj.Summation();
        System.out.println("Summation is : " + iRet);

        iRet = mobj.maximun();

        System.out.println("Maximum element is : " + iRet);

        iRet = mobj.minimum();

        System.out.println("Minimum element is : " + iRet);


       mobj = null;
       
    }
}