function Factorial(no)
{
    let iFact = 1;


    while(no != 0)
    {
        iFact *= no;
        no--;
    }
    return iFact;
}

function main()
{
    let iValue = 20;
    let iRet = 0;

   iRet =  Factorial(iValue);

    console.log(`The Factorial of ${iValue} is ${iRet}`);   // Important
}

main();
