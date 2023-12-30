#include <iostream>
using namespace std;

struct patient
{
	public:
		string name;
		int num;
		patient *next;
		
		patient()
		{
			name = "";
			num = 0;
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
		void enquque(string ptname,int number)
		{
			patient *newpt = new patient();
			newpt->name = ptname;
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
			//check if queue is empty no nodes 
			if(isEmpty())
			cout<< "clinic queue is Empty\n";
			//check if queue is only one patient
			else if (first == last)
			{
				delete first;
				first = last = NULL;
			}
			//if queue isn't empty or single node queue
			else
			{
				//create tmperory pointer to first 
				patient *tmp = first;
				//move first pointer to next node 
				first = first->next; 
				//delete temprory pointer and its node 
				delete tmp;
			}
		}
		//gets first patient in queue
		string getfirst()
		{
			return first->name;
		}
		//get last patient in queue 
		string getlast()
		{
			return last->name;
		}
		// travers the queue and displays all patient informations
		void display()
		{
			//create temprory node points to first node 
			patient *tmp = first;
			//move cursor along queue
			while (tmp != NULL)
			{
				//display node info 
				cout<< tmp->name<<endl;
				cout<< tmp->num<<endl;
				//move cursor to next node 
				tmp = tmp->next;
			}
			cout<<"\n=====================\n";
		}
		int linesize()
		{
			//intialize count to zero 
			int count = 0;
			//create temprory cursor node to first
			patient *tmp = first;
			//traverse the queue
			while (tmp != NULL)
			{
				//increase count by 1 with each busy node
				count++;
				//move cursor pointer to next node 
				tmp = tmp->next;
			}
			// return funal count
			return count;
		}
		//search queue by patient name
		bool search(string name)
		{
			//create boolen variable to recieve result
			bool flag = false;
			int inlinenum = 0;
			//create temprory cursor 
			patient *tmp = first;
			//traverse queu
			while (tmp != NULL)
			{
				inlinenum++;
				//if cursor->name matches input search 
				if (tmp->name == name)
				{
					flag = true;
					cout<<"number in queue: "<<inlinenum<<endl;
				}
				
					tmp = tmp->next;
				}
				return flag;
		}
		
};






