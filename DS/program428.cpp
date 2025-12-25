#include<iostream>
using namespace std;

struct node
{
	int data;
	struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;	// felt cute, might delete later

class SinglyLL
{
	public:
		PNODE first;
		int iCount;

		SinglyLL()
		{
			cout<<"Object of SinglyLL gets created.\n";
			first = NULL;
			iCount = 0;
		}

		void InsertFirst(int no)
		{
			PNODE newn = NULL;
			
			newn = new NODE;

			newn->data = no;
			newn->next = NULL;

			newn->next = first;		// code reduction
			first = newn;			// not optimization

			iCount++;
		}

		void InsertLast(int no)
		{
			PNODE newn = NULL;
			PNODE temp = NULL;
			
			newn = new NODE;

			newn->data = no;
			newn->next = NULL;

			if(iCount == 0)	// updated
			{
				first = newn;
			}
			else
			{
				temp = first;

				while(temp->next != NULL)
				{
					temp = temp->next;
				}

				temp->next = newn;
			}

			iCount++;
		}

		void DeleteFirst()
		{
			PNODE temp = NULL;

			if(first == NULL)
			{
				return;
			}
			else if(first->next == NULL)	// iCount == 1
			{
				delete first;
				first = NULL;
			}
			else
			{
				temp = first;

				first = first->next;
				delete temp;
			}

			iCount--;	// important
		}

		void DeleteLast()
		{
			PNODE temp = NULL;

			if(first == NULL)
			{
				return;
			}
			else if(first->next == NULL)	// iCount == 1
			{
				delete first;
				first = NULL;
			}
			else
			{
				temp = first;

				while(temp->next->next != NULL)
				{
					temp = temp->next;
				}

				delete temp->next;
				temp->next = NULL;
			}

			iCount--;	// important
		}

		void Display()
		{
			PNODE temp = NULL;
			int iCnt = 0;

			temp = first;

			// updated
			for(iCnt = 1; iCnt <= iCount; iCnt++)	// 3
			{
				cout << "| " << temp->data << " |->";
				temp = temp->next;	// can put it in for 3
			}

			cout << "NULL\n";
		}

		int Count()
		{
			return iCount;
		}

		void InsertAtPos(int no, int pos)
		{
			PNODE newn = NULL;
			PNODE temp = NULL;

			int iCnt = 0;

			if(pos < 0 || pos > iCount+1)
			{
				cout<<"Invalid position\n";
				return;
			}
			
			if(pos == 1)
			{
				InsertFirst(no);
			}
			else if(pos == iCount+1)
			{
				InsertLast(no);
			}
			else
			{
				newn = new NODE;
				newn->data = no;
				newn->next = NULL;

				temp = first;

				for(iCnt = 1; iCnt < pos - 1; iCnt++)
				{
					temp = temp->next;
				}

				newn->next = temp->next;
				temp->next = newn;

				iCount++;
			}
		}

		void DeleteAtPos(int pos)
		{
			PNODE temp = NULL;
			PNODE target = NULL;

			int iCnt = 0;

			if(pos < 0 || pos > iCount)
			{
				cout<<"Invalid position";
				return;
			}

			if(pos == 1)
			{
				DeleteFirst();
			}
			else if(pos == iCount)
			{
				DeleteLast();
			}
			else
			{
				temp = first;


				for(iCnt = 1; iCnt < pos - 1; iCnt++)
				{
					temp = temp->next;
				}

				target = temp->next;
				temp->next = target->next;
				
				delete target;

				iCount--;	// important
			}
		}
};

int main()
{
	SinglyLL obj;
	int iRet = 0;

	obj.InsertFirst(51);
	obj.InsertFirst(21);
	obj.InsertFirst(11);

	obj.Display();

	iRet = obj.Count();

	cout<<"Number of nodes are "<<iRet<<"\n";

	obj.InsertLast(101);
	obj.InsertLast(111);
	obj.InsertLast(121);

	obj.Display();

	iRet = obj.Count();

	cout<<"Number of nodes are "<<iRet<<"\n";

	obj.DeleteFirst();

	obj.Display();

	iRet = obj.Count();

	cout<<"Number of nodes are "<<iRet<<"\n";

	obj.DeleteLast();

	obj.Display();

	iRet = obj.Count();

	cout<<"Number of nodes are "<<iRet<<"\n";

	obj.InsertAtPos(105, 4);

	obj.Display();

	iRet = obj.Count();

	cout<<"Number of nodes are "<<iRet<<"\n";

	obj.DeleteAtPos(4);

	obj.Display();

	iRet = obj.Count();

	cout<<"Number of nodes are "<<iRet<<"\n";

	return 0;
}
