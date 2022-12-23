import java.util.*;

class Digit
{
    int iDigit = 0,iMult = 1;
    int iSumE = 0,iSumO = 0;
    public int CountDifference(int iNo)
    {
        while(iNo != 0) 
        {
            iDigit = iNo %10;
            if(iDigit%2==0)
            {
                iSumE =iDigit+iSumE;
            }
            else
            {
                iSumO =iDigit+iSumO;
            }
            iMult = iDigit * iMult;
            iNo = iNo / 10;
        }
        return iSumE-iSumO;
    }
}

class Program33_5
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        Digit dobj = new Digit();

        System.out.println("Enter element");
        int  iNo = sobj.nextInt();

        int iRet =dobj.CountDifference(iNo);
        System.out.println("Difference  is "+iRet);
        
    }
}