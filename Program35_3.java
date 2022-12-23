import java.util.*;

class StringDemo
{
    public boolean StrCmpX(String str1, String str2, int iNo)
    {
        int iCnt = 0;

        for(int i = 0;i<iNo;i++)
        {
            if(str1.charAt(i)==str2.charAt(i))
            {
                iCnt++;
            }
            else
            {
                break;
            }
        }

        if(iCnt==iNo)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

}

class Program35_3
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter First String");
        String str1 = sobj.nextLine();

        System.out.println("Enter Second String");
        String str2 = sobj.nextLine();

        System.out.println("Enter Characters to check");
        int iNo = sobj.nextInt();

        StringDemo dobj = new StringDemo();

        boolean str =dobj.StrCmpX(str1,str2,iNo);

        if(str == true)
        {
            System.out.println("Strings are equal");
        }        
        else
        {
            System.out.println("String are not equal");
        }

       

    }
}