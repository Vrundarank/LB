import java.util.*;

class Number
{
    public boolean CheckPerfect(int iNo)
    {
        int i = 0 , iSum = 0;
        if(iNo < 0)
        {
            iNo = -iNo;
        }
        for(i = 1;i <= (iNo/2); i++)
        {
            if((iNo % i) == 0)
            {
                iSum = iSum + i;
            }
        }

        return (iSum == iNo);    // Expression is  evaluated to either true or false 
    }
}//End of Number class

class program82
{

    public static void main(String A[])
    {
        int iValue = 0; 
        boolean bRet = false;
        
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter a Number : ");
        iValue = sobj.nextInt();

        Number nobj = new Number();
        bRet = nobj.CheckPerfect(iValue);

        if(bRet == true)
        {
            System.out.println(iValue+ " is Perfect number");
        }
        else
        {
            System.out.println(iValue+ " is not Perfect number");
        }


        // Important

        sobj = null;
        nobj = null;

        System.gc(); //Implicitly calls the Garbage Collector Thread... 
    } 
}