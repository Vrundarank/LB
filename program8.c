/*
    Step 1: Understand the problem Statement 
    Step 2: Write the algorithm
    Step 3: Decide the programming language
    Step 4: Write the program
    Step 5: Test the program
*/


/*
    Algorithm

    START
        Accept First number as no1
        Accept Second number as no2
        perform addition of no1 and no2
        Display the addition on Screen
    STOP
*/
#include<stdio.h>

float AdditionTwoNumbers(float fNo1, float fNo2)
{
    float fSum = 0;
    fSum = fNo1 + fNo2; //Business Logic
    return fSum;
}

int main()
{
    float fValue1 = 0.0f , fValue2 = 0.0f , fRet = 0.0f;
    
    printf("Enter first Number : \n");
    scanf("%f",&fValue1);

    printf("Enter Second Number : \n");
    scanf("%f",&fValue2);

    fRet = AdditionTwoNumbers(fValue1,fValue2);

    printf("Addition is : %0.3f \n",fRet);
    
    return 0;
}