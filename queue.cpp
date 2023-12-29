#include <iostream>
using namespace std;

class patient
{
	public:
		
		int num;
		patient *next;
		
		patient()
		{
			
			num = 99;
			next = NULL;
		};
	
};
class queue
{
	public:
		patient* first;
		patient* last;
		queue()
		{
			first = last = NULL;
		}
		bool isEmpty()
		{
			if (first == NULL)
			return true;
			else
			return false;
		}
		void enquque(int number)
		{
			patient *newpt = new patient();
			newpt->num = number;
			if(isEmpty())
			{
				first = last = newpt;
			}
			else
			{
				last->next = newpt;
				last = newpt;
			}
		}
		void dequeue()
		{
			if(isEmpty())
			cout<< "clinic queue is Empty\n";
			else if (first == last)
			{
				delete first;
				first = last = NULL;
			}
			else
			{
				patient *tmp = first;
				first = first->next;
				delete tmp;
			}
		}
		int getfirst()
		{
			return first->num;
		}
		int getlast()
		{
			return last->num;
		}
		void display()
		{
			patient *tmp = first;
			while (tmp != NULL)
			{
				cout<< tmp->num<<'\n';
				tmp = tmp->next;
			}
			cout<<endl;
		}
		int linesize()
		{
			int count = 0;
			patient *tmp = first;
			while (tmp != NULL)
			{
				count++;
				tmp = tmp->next;
			}
			return count;
		}
		bool search(int item)
		{
			bool flag = false;
			patient *tmp = first;
			while (tmp != NULL)
			{
				if (tmp->num == item)
				{
					flag = true;
					tmp = tmp->next;
				}
				return flag;
			}
		}
		
};





