import java.util.*;

class Digit
{
    int iDigit = 0,iCnt = 0;
    public int CountEven(int iNo)
    {
        while(iNo != 0) 
        {
            iDigit = iNo %10;
            if(iDigit%2==0)
            {
                iCnt++;
            }
            iNo = iNo / 10;
        }
        return iCnt;
    }
}

class Program33_1
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        Digit dobj = new Digit();

        System.out.println("Enter element");
        int  iNo = sobj.nextInt();

        int iRet =dobj.CountEven(iNo);
        System.out.println("Even Digits is :"+iRet);
        
    }
}