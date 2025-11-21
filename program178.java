/*
  input :  8
  Output : z   y   x   w   v   u   t   s
  index :  1   2   3   4   5   6   7   8
*/  

import java.util.*;

class Pattern
{
    public void Display(int iNo)
    {
        int iCnt = 0;
        //int i = 97;
        char ch = 'z';

        for(iCnt = 1 ; iCnt <= iNo ; iCnt++,ch--)
        {    
            System.out.printf("%c\t",ch);
            
        }
        System.out.println();
    
    }
}

class program178
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