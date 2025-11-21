import java.util.*;
// Input : 5 
// Output : 5 * 4 * 3 * 2 * 1 
class Number
{
    public int CalculateFactorial(int iNo)
    {
        int i = 0, iFact = 1;
        if(iNo < 0)
        {
            iNo = -iNo;
        }

        //Logic
        for(i = 1 ; i <= iNo; i++)
        {
            iFact = iFact * i;
        }
        return iFact;
    }
}//End of Number class

class program87
{

    public static void main(String A[])
    {
        int iValue = 0,  iRet = 0;
        
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