import java.util.*;

class Pattern
{
    public void DisplayPattern(String str)
    {     
        for(int i =0;i<=str.length()-1;i++)
        { 
            for(int j = 0;j<=str.length()-1;j++)
            {
                if(i>=j)
                {
                    System.out.print(str.charAt(j)+"\t");
                }
                else
                {
                    System.out.print("#\t");
                }
                
            }
            System.out.println();
        }

    }
}

class Program39_3

{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String");
        String str  = sobj.nextLine();

        Pattern pobj = new Pattern();

        pobj.DisplayPattern(str);

    }
}