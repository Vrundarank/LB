import java.util.*;

class StringX
{
    public String toLowerCaseX(String str)
    {
        int iCnt = 0;
        char Arr[] = str.toCharArray();

        for(iCnt = 0 ; iCnt < Arr.length ; iCnt++)
        {
            if(Arr[iCnt] >= 'A' && Arr[iCnt] <= 'Z')
            {
                Arr[iCnt] =  (char)(Arr[iCnt] + 32); // short Hand works
            }
             
        }
        return  new String(Arr); 

    }
}

class program255
{
    public static void main(String A[])
    {
       String sRet = null;

        Scanner scanobj = new Scanner(System.in);

        System.out.println("Enter String : " );
        String  sobj = scanobj.nextLine();

        StringX strobj = new StringX();


        sRet = strobj.toLowerCaseX(sobj);                    // changed (Not preferable)

        System.out.println("Updated String : " +sRet);


        
    }

}