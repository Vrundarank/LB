/*
    Algorithm

    START
        Accept First number as no1
        Accept Second number as no2
        If the input is negative then convert it into Positive
        perform addition of no1 and no2
        Display the addition on Screen
    STOP
*/

///////////////////////////////////////////////////////////////
//                                                           //
//               Required Header Files                       //
//                                                           //
///////////////////////////////////////////////////////////////
#include<stdio.h>
///////////////////////////////////////////////////////////////
//                                                           //
//   Function Name :  AdditionTwoNumbers                     //                     
//   Description :    It is used to perform addition         //
//   Input :          Float, Float                           //
//   Output :         Float                                  //
//   Author :         Vrundfarank Shivaji Parite             //
//   Date :           09/10/2025                             //
//                                                           //
///////////////////////////////////////////////////////////////
float AdditionTwoNumbers(
                            float fNo1,                      // First Input
                            float fNo2                       // Second Input
                        )
{
    float fSum = 0.0f;                                       // To store the result

    if(fNo1 < 0.0f)                                          // Updator
    {
        fNo1 = -fNo1;
    }

    if(fNo2 < 0.0f)                                           // Updator
    {
        fNo2 = -fNo2;
    }
    fSum = fNo1 + fNo2; //Business Logic
    return fSum;
}  // End of AdditionTwoNumbers
//////////////////////////////////////////////////////////////
//                                                          //
//      Entry poiont Function for the application           //
//                                                          //
//////////////////////////////////////////////////////////////
int main()
{
    float fValue1 = 0.0f , fValue2 = 0.0f ;                   // To accept the Input
    float fRet = 0.0f;                                        // To Store the result 
    
    printf("Enter first Number : \n");
    scanf("%f",&fValue1);

    printf("Enter Second Number : \n");
    scanf("%f",&fValue2);

    fRet = AdditionTwoNumbers(fValue1,fValue2);               // API Call

    printf("Addition is : %0.3f \n",fRet);
    
    return 0;
}   // End of main

///////////////////////////////////////////////////////////////
//                                                           //
//  Testcases Successfully handled by the application        //
//                                                           //
//  Input1 : 10.5        Input2 : 3.2        Output : 13.7   //
//  Input1 : -10.5       Input2 : 3.2        Output : 13.7   //
//  Input1 : 10.5        Input2 : -3.2       Output : 13.7   //
//  Input1 : -10.5       Input2 : -3.2       Output : 13.7   //
//  Input1 : 10.5        Input2 : 0.0        Output : 10.5   //
//                                                           //
///////////////////////////////////////////////////////////////