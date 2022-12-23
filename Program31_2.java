import java.util.*;

class StringDemo
{
    public int CountSmall(String str)
    {
        int iCnt = 0;
        for(int i = 0;i<str.length();i++)
        {
            if(str.charAt(i) >= 'a'  && str.charAt(i) <= 'z')
            {
                iCnt++;
            }
            }

        return iCnt;

    }
}

class Program31_2
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        StringDemo dobj = new StringDemo();

        System.out.println("Enter String");
        String str = sobj.nextLine();

        int iRet = dobj.CountSmall(str);
        System.out.println("Small Letters is "+ iRet);

    }
}