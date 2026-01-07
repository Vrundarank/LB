///////////////////////////////////////////////////////////////////////
//              Final code of Queue using Generic Approach
///////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

#pragma pack(1)

template<class T>
class Queuenode
{
	public:
		T data;
		Queuenode<T> *next;

		Queuenode(T no)
		{
			this->data = no;
			this->next = NULL;
		}
};

template<class T>
class Queue
{
	private:
		Queuenode<T> *first;
        Queuenode<T> *last;
		int iCount;
	
	public:
		Queue();
		void enqueue(T);	
		T dequeue();		
		void Display();
		int Count();
};

template<class T>
Queue<T>::Queue()
{
	cout << "Queue gets created successfully!\n";
	this->first = NULL;
    this->last = NULL;
	this->iCount = 0;
}

template<class T>
void Queue<T>::enqueue(T no)
{
	Queuenode<T> *newn = NULL;

	newn = new Queuenode<T>(no);

    if(this->first == NULL && this->last == NULL)
    {
        this->first = newn;
        this->last = newn;
    }
    else
    {
        this->last->next = newn;
        this->last = this->last->next;
    }

    this->iCount++;

}

template<class T>
T Queue<T>::dequeue()
{
	T Value = 0;
	Queuenode<T> *temp = this->first;
	
	if(NULL == this->first && NULL == this->last)
	{
		cout << "Queue is empty!";
		return -1;
	}

	Value = this->first->data;

	this->first = this->first->next;
	
	delete temp;

	this->iCount--;
	return Value;
}

template<class T>
void Queue<T>::Display()
{
	Queuenode<T> *temp = this->first;

	if(NULL == this->first && this->last == NULL)
	{
		cout << "Queue is empty!";
		return;
	}

	while(temp != NULL)
	{
		cout << " | " << temp->data << " | - ";
		temp = temp->next;
	}

    cout<<"\n";
}

template<class T>
int Queue<T>::Count()
{
	return this->iCount;
}

int main()
{
    Queue<int> *qobj = new Queue<int>();

    int iChoice = 0;
    int Value = 0;  // Due to Generic convention won't follow
    int iRet = 0;

    while(1) // Unconditional Loop
    {
        cout<<"-------------------------------------------------\n";
        cout<<"          Please Select The Option                \n";
        cout<<"1 : Insert new element into the queue\n";
        cout<<"2 : Remove new element from the queue\n";
        cout<<"3 : Display new element to the queue\n";
        cout<<"4 : Count the number of elements from the queue\n";
        cout<<"0 : Exit The Application\n";

        cin>>iChoice;
        cout<<"-------------------------------------------------\n";
    

        switch(iChoice)
        {
            case 1 :
                cout<<"Enter The Element that you want to Insert : \n ";
                cin>>Value;
                qobj->enqueue(Value);
                cout<<"Elements gets Inserted Successfully\n";
                break;

            case 2 :
                iRet = qobj->dequeue();
                if(iRet != -1)
                {
                    cout<<"Element removed from Queue is : "<<iRet<<"\n";
                }
                break;

            case 3 :
                cout<<"Elements of the queue are : \n";
                qobj->Display();
                break;

            case 4 :
                iRet = qobj->Count();
                cout<<"Number of Elements in queue are : "<<iRet<<"\n";
                break;

            case 0 :
                cout<<"Thankyou For Using Our Application\n";
                delete qobj;
                return 0;

            default :
                cout<<"Please Enter The Valid Option\n";

        }//End Of Switch Case
    }//End of while
	return 0;
}//End of main