import java.util.*;

class Pattern
{
    public void DisplayPattern(int iRow,int iCol)
    { 
        if(iRow!=iCol)
        {
            return;
        }    
        for(int i =iRow;i>=1;i--)
        {
            for(int j =1;j<=iCol;j++)
            {
                if(i==1 || i==iRow  || j==1 || j == iCol)
                {
                    System.out.print("*\t");
                }
                else if(i==j)
                {
                    System.out.print("*\t"); 
                }
                else
                {
                    if(i<j)
                    {
                        System.out.print("$\t");
                    }
                    else
                    {
                        System.out.print("#\t");
                    }
                    //System.out.print(" \t");

                }
                
        
            }            
            System.out.println();
        }
    }
}

class Program40_4
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