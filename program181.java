/*
    Example :
    iRow = 4
    iCol = 4
    
    a   b   c   d
    a   b   c   d
    a   b   c   d
    a   b   c   d
*/  

import java.util.*;

class Pattern
{
    public void Display(int iRow,int iCol)
    {
        int i = 0, j = 0;
        char ch = '\0'; // changed this to string terminating character

        for(i = 1; i <= iRow ; i++)
        {       
            for(j = 1 , ch = 'a'; j <= iCol; ch++)
            {
                System.out.printf("%c\t", ch);
            }
            System.out.println();
        }
    }
}

class program181
{
    public static void main(String A[])
    {   Scanner sobj = new Scanner(System.in);
        int iValue1 = 0, iValue2 = 0;

        System.out.println("Enter the Number of rows : ");
        iValue1 = sobj.nextInt();

        System.out.println("Enter the Number of column  : ");
        iValue2 = sobj.nextInt();

        Pattern pobj = new Pattern();
        pobj.Display(iValue1,iValue2);
    }
}