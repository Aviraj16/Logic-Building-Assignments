import java.util.*;

class Number
{
    public int FirstOcc(int Arr[],int iNo)
    {
        int i = 0,iCnt= 0;
        for(i = 0;i<Arr.length;i++)
        {
            if(Arr[i]==iNo)
            {
                iCnt++;
                break;

            }
            

        }
        if(iCnt==1)
        {
            return i;
        }
        else
        {
            return -1;
        }
    }
}

class Program34_2
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

        int iRet =nobj.FirstOcc(Arr,iNo);

        System.out.println("First Occurence of "+iNo+" is "+iRet);
    }
}