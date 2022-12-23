import java.util.*;

class StringDemo
{
    public void Reverse(String str)
    {
        char Arr[] = str.toCharArray();
        int iCnt = 0, i = 0;
        for(i =(Arr.length-1);i>-1;i--)
        {
            System.out.print(Arr[i]);
        }

    }
}

class Program31_5
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        StringDemo dobj = new StringDemo();

        System.out.println("Enter String");
        String str = sobj.nextLine();

        dobj.Reverse(str);
        

    }
}