import java.util.*;

class Pattern
{
    public void DisplayPattern(int iRow,int iCol)
    {
        
        for(int i = 0;i<iRow;i++)
        {
            char ch = 'A';
            for(int j = 0;j<iCol;j++,ch++)
            {
                System.out.print(ch+"\t");

            }
            System.out.println();
        }

    }
}

class Program36_1
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