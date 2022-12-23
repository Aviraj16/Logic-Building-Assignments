import java.util.*;

class StringDemo
{
    public int CountDiff(String str)
    {
        int iCapital = 0, iSmall = 0;
        for(int i = 0;i<str.length();i++)
        {
            if(str.charAt(i) >= 'a'  && str.charAt(i) <= 'z')
            {
                iSmall++;
            }
            else
            {
                iCapital++;
            }

        }

        return iSmall-iCapital;

    }
}

class Program31_3
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        StringDemo dobj = new StringDemo();

        System.out.println("Enter String");
        String str = sobj.nextLine();

        int iRet = dobj.CountDiff(str);
        System.out.println("Difference is "+ iRet);

    }
}