import java.util.*;

class Number
{
    public void Display(int Arr[],int iStart,int iEnd)
    {
        int i = 0;
        for(i = 0;i<Arr.length;i++)
        {
            if(Arr[i]>=iStart && Arr[i]<= iEnd)
            {
                System.out.print(Arr[i]+"\t");

            }
            
        }
    }
}

class Program34_4
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        Number nobj = new Number();

        System.out.println("Enter size of element");
        int  iSize = sobj.nextInt();

        System.out.println("Enter Start Number");
        int  iStart = sobj.nextInt();

        System.out.println("Enter Ending Number");
        int  iEnd = sobj.nextInt();

        int Arr[] = new int[iSize];

        for(int i = 0;i<Arr.length;i++)
        {
            System.out.println("Enter Element");
            Arr[i] = sobj.nextInt();
        }

        nobj.Display(Arr,iStart,iEnd);
    }
}