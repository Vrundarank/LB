// Not Allowed : Only One costructor is allowed

class Demo
{
    constructor()     // Default Constructor
    {   
        this.No1 = 0;
        this.No2 = 0;

        console.log("Inside  Default Constructor");
    }

    constructor(A , B)     // Parameterized Constructor
    {   
        this.No1 = A;
        this.No2 = B;

        console.log("Inside  Parameterized Constructor");
    }
}

function main()
{
    let obj1 = new Demo();
    let obj2 = new Demo(10,20);
}
main();