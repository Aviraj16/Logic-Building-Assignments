import java.util.*;

class Digit
{
    int iDigit = 0,iMult = 1;
    public int Multiply(int iNo)
    {
        while(iNo != 0) 
        {
            iDigit = iNo %10;
            if(iDigit==0)
            {
                iDigit =1;
            }
            iMult = iDigit * iMult;
            iNo = iNo / 10;
        }
        return iMult;
    }
}

class Program33_4
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        Digit dobj = new Digit();

        System.out.println("Enter element");
        int  iNo = sobj.nextInt();

        int iRet =dobj.Multiply(iNo);
        System.out.println("Multiplication is "+iRet);
        
    }
}