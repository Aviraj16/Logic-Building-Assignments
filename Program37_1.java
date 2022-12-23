import java.util.*;

class Pattern
{
    public void DisplayPattern(int iRow,int iCol)
    {     
        for(int i =0;i< iRow;i++)
        {

            for(int j =0;j<iCol;j++)
            {
               System.out.print("*\t"); 
            }
            
            System.out.println();
        }

    }
}

class Program37_1
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter no of rows");
        int i = sobj.nextInt();
        System.out.println("Enter no of columns");
        int j = sobj.nextInt();

        Pattern pobj = new Pattern();

        pobj.DisplayPattern(i,j);

    }
}