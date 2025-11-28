import java.util.*;

class StringX
{
    public String Update(String str)
    {

        char Arr[] = str.toCharArray();

        Arr[0] = '_';

        return  new String(Arr); // Changed this from previous

    }
}

class program254
{
    public static void main(String A[])
    {
       
        Scanner scanobj = new Scanner(System.in);

        System.out.println("Enter String : " );
        String  sobj = scanobj.nextLine();

        StringX strobj = new StringX();


        sobj = strobj.Update(sobj);                    // changed (Not preferable)

        System.out.println("Updated String : " +sobj);


        
    }

}