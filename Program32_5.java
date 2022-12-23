import java.util.*;

class ArrayDemo
{
    public void Difference(int Arr[])
    {
        for(int i = 0;i<Arr.length;i++)
        {
            if(Arr[i]%11 ==0 )
            {
                System.out.print("\t"+Arr[i]);
            }
        }
    }
}

class Program32_5
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        ArrayDemo dobj = new ArrayDemo();

        System.out.println("Enter Size of element");
        int  iSize = sobj.nextInt();

        int Arr[] = new int[iSize];

        for(int i = 0;i<Arr.length;i++)
        {
            System.out.println("Enter elements");
            Arr[i] = sobj.nextInt();

        }

        dobj.Difference(Arr);
        
    }
}