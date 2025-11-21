import java.util.*;
// Input : 5 
// Output : 5 * 4 * 3 * 2 * 1  
class Number
{
    public long CalculateFactorial(int iNo)
    {
        int i = 0;
        long iFact = 1; // Long Important
        
        if(iNo < 0)
        {
            iNo = -iNo;
        }

        //Logic
        i = 1;
        while(i <= iNo)
        {
            iFact = iFact * i;
            i++;    
        }

        return iFact;
    }
}//End of Number class

class program89
{

    public static void main(String A[])
    {
        int iValue = 0;
        long iRet = 0;
        
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter a Number : ");
        iValue = sobj.nextInt();

        Number nobj = new Number();
        iRet = nobj.CalculateFactorial(iValue);

        System.out.println("Factorial is : " + iRet);

        // Important

        sobj = null;
        nobj = null;

        System.gc(); //Implicitly calls the Garbage Collector Thread... 
    } 
}