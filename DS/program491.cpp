#include<iostream>
using namespace std;

#pragma pack(1)
class Stacknode
{
    public :
        int data;
        Stacknode *next;

        Stacknode(int no)
        {
            this->data = no;
            this->next = NULL;
        }
};

class Stack
{
    private:
        Stacknode *first;
        int iCount;

    public:
        Stack();

        void push(int);         // InsertFirst
        int pop();              // DeleteFirst
        int peep();
        void Display();
        int Count();           
};

Stack :: Stack()
{
    cout<<"Stack gets created successfully \n";
    this->first = NULL;
    this->iCount = 0;
}

void Stack :: push(int no)         // InsertFirst
{
    Stacknode *newn = NULL;

    newn = new Stacknode(no);

    newn->next = this->first;
    this->first = newn;

    this->iCount++;
}
int Stack :: pop()              // DeleteFirst
{
    return 0;
}
int Stack :: peep()
{
    return 0;
}

void Stack :: Display()
{
    Stacknode *temp = this->first;

    if(NULL == this->first)
    {
        cout<<"Stack is Empty!";
        return;
    }

    while(temp != NULL)
    {
        cout<<"|\t"<<temp->data<<"\t|\n";
        temp = temp -> next;
    }
}
int Stack :: Count()
{

    return this->iCount;
}    
int main()
{
    Stack *sobj = new Stack();

    sobj->push(11);
    sobj->push(21);
    sobj->push(51);
    sobj->push(101);

    sobj->Display();

    cout<<"Number of Elements in Stack are : "<<sobj->Count()<<"\n";

    delete sobj;

    return 0;
}