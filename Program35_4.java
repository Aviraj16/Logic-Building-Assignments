import java.util.*;

class StringDemo
{
    String str1 = "";
    public String StrRevTogX(String str)
    {
        
        char Arr[] = str.toCharArray();

        for(int i = (Arr.length-1);i>-1;i--)
        {

            if(Arr[i] >='A' && Arr[i]<='Z' )
            {
                Arr[i] += 32; 
            }
            else
            {
                Arr[i] -= 32;
            } 
            str1 = str1 + Arr[i];
        }
        
        return str1;


    }

}

class Program35_4
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String");
        String str = sobj.nextLine();

        StringDemo dobj = new StringDemo();

        String str1 =dobj.StrRevTogX(str);

        System.out.println("Reverse Toggle String is "+str1);


       

    }
}