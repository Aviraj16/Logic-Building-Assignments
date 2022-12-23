import java.util.*;

class Number
{
    public int Product(int Arr[])
    {
        int i = 0,iMult=1,iTemp =0;
        for(i = 0;i<Arr.length;i++)
        {
            if(Arr[i]%2 != 0)
            {
                iMult = Arr[i] * iMult;
            }

        }
        if(iMult>1)
        {
            return iMult;
        }

        else
        {
            return 0;
        }

       // return iMult;

        
    }
}

class Program34_5
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        Number nobj = new Number();

        System.out.println("Enter size of element");
        int  iSize = sobj.nextInt();

        int Arr[] = new int[iSize];

        for(int i = 0;i<Arr.length;i++)
        {
            System.out.println("Enter Element");
            Arr[i] = sobj.nextInt();
        }

        int iRet =nobj.Product(Arr);

        System.out.println("Multiplication is "+iRet);
    }
}