import java.io.*;

class program76
{
    //Not a good Programming Practice
    public static void main(String A[]) throws IOException
    {
        int iNo = 0; 
        int i = 0;

        BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in)); //Using BufferedReader

        System.out.println("Enter a Number : ");

        iNo = Integer.parseInt(bobj.readLine());
        
       
        for(i = 1;i <= (iNo/2); i++)
        {
            if((iNo % i) == 0)
            {
                System.out.println(i);
            }
        }
        

    }
}