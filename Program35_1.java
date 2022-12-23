import java.util.*;

class StringDemo
{
    public String StrNCatX(String str1, String str2, int iCnt)
    {
        char Arr1[] = str2.toCharArray();
        String str;

        //System.out.print(str1);
        if(iCnt > Arr1.length)
        {
            str = str1+str2;
        }
        else
        {
            str = str1;
            for(int i=0;i<iCnt;i++)
            {
                str = str +Arr1[i];
            }
        }

        return str;


    }

    

}

class Program35_1
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter First String");
        String str1 = sobj.nextLine();

        System.out.println("Enter Second String");
        String str2 = sobj.nextLine();

        System.out.println("Enter Characters from second string to Concatinate");
        int iCnt = sobj.nextInt();

        StringDemo dobj = new StringDemo();

        String str =dobj.StrNCatX(str1,str2,iCnt);

        System.out.println("String After Concatination is "+ str);

    }
}