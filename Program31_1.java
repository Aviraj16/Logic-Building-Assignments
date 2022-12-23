import java.util.*;

class StringDemo
{
    public int CountCapital(String str)
    {
        int iCnt = 0;
        for(int i = 0;i<str.length();i++)
        {
            if(str.charAt(i) >= 'A'  && str.charAt(i) <= 'Z')
            {
                iCnt++;
            }
            }

        return iCnt;

    }
}

class Program31_1
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        StringDemo dobj = new StringDemo();

        System.out.println("Enter String");
        String str = sobj.nextLine();

        int iRet = dobj.CountCapital(str);
        System.out.println("Capital Letters is "+ iRet);

    }
}