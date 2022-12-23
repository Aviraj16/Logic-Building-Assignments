import java.util.*;

class Number
{
    public boolean Check(int Arr[],int iNo)
    {
        int iCnt = 0;
        for(int i = 0;i<Arr.length;i++)
        {
            if(Arr[i]==iNo)
            {
                iCnt++;
                break;
            }
        }
        if(iCnt==1)
        {
            return true;
        }
        else
        {
            return false;
        }
        
    }
}

class Program34_1
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        Number nobj = new Number();

        System.out.println("Enter size of element");
        int  iSize = sobj.nextInt();

        System.out.println("Enter element to search");
        int  iNo = sobj.nextInt();

        int Arr[] = new int[iSize];

        for(int i = 0;i<Arr.length;i++)
        {
            System.out.println("Enter Element");
            Arr[i] = sobj.nextInt();
        }

        boolean bRet =nobj.Check(Arr,iNo);
        if(bRet == true)
        {
            System.out.println("number is present ");
        }
        else
        {
            System.out.println("Number is absent");
        }
    }
}