import java.util.*;

class StringDemo
{
    public boolean ChkVowel (String str)
    {
        int iCnt = 0;
        for(int i = 0;i<str.length();i++)
        {
            if(str.charAt(i) == 'a' || str.charAt(i) == 'e' || str.charAt(i) == 'i' || str.charAt(i) == 'o' || str.charAt(i) == 'u')
            {
                iCnt++;
            }

        }
        if(iCnt>0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

class Program31_4
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        StringDemo dobj = new StringDemo();

        System.out.println("Enter String");
        String str = sobj.nextLine();

        boolean bRet = dobj.ChkVowel(str);
        if(bRet == true)
        {
            System.out.println("TRUE");
        }
        else
        {
            System.out.println("FALSE");
        }
        

    }
}