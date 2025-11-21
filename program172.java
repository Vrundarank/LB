/*
   input : 5
   output : a   b   c   d   e
   index  : 1   2   3   4   5

*/  

import java.util.*;

class Pattern
{
    public void Display(int iNo)
    {
        int iCnt = 0;
        int i = 97;
        for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
        {
            System.out.printf("%d\t",i);
            i++;
        }
        System.out.println();
    
    }
}

class program172
{
    public static void main(String A[])
    {   Scanner sobj = new Scanner(System.in);
        int iValue1 = 0, iValue2 = 0;

        System.out.println("Enter the Frequency : ");
        iValue1 = sobj.nextInt();

        Pattern pobj = new Pattern();
        pobj.Display(iValue1);
    }
}