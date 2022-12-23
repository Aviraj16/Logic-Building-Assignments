import java.util.*;

class ArrayDemo
{
    public int Difference(int Arr[])
    {
        int iSumE = 0, iSumO = 0;
        for(int i = 0;i<Arr.length;i++)
        {
            if(Arr[i]%2 ==0)
            {
                iSumE = Arr[i] + iSumE;
            }
            else
            {
                iSumO = Arr[i] + iSumO;
            }
        }

        return iSumE-iSumO;


    }

}

class Program32_1
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

        int iRet = dobj.Difference(Arr);
        System.out.println("Difference is "+iRet);
        
    }
}