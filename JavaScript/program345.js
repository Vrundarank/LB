function Factorial(no)
{
    let iFact = 1;
    //let iCnt = 0;
    //for(iCnr = 1 ; iCnt <= (no/2) ; iCnt++)
    //{
    //    if((no % iCnt) == 0)
    //    {
    //        console.log(iCnt);
    //    }
    //}

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

    console.log(`The Factorial of ${iValue} is ${iRet}`);
}

main();
