import java.util.*;

class StringDemo
{
    public boolean StrCmpX(String str1, String str2)
    {

        if(str1.equals(str2))
        {
            return true;
        }
        else
        {
            return false;
        }
    }

}

class Program35_2
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter First String");
        String str1 = sobj.nextLine();

        System.out.println("Enter Second String");
        String str2 = sobj.nextLine();

        StringDemo dobj = new StringDemo();

        boolean str =dobj.StrCmpX(str1,str2);

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