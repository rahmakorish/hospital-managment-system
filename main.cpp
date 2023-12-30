#include <iostream>
#include <unistd.h>
#include "queue.h"
#include <string>
using namespace std;
/**
 * main - Entry point for program
 * Return:0 on success, -1 of failure
 */
int main()
{
	string ptname1;
	bool exist;
	int phone;
	int queuelength;
	queue clinicQ;
	int input;
	string searchname;
	cout<<"\nCLINIC MANAGEMENT SYSTEM";
    cout<<"\n\nMAIN MENU";
	cout<<"\n=====================\n";
    cout<<"[1] Add a new patient\n";//enquaue()
    cout<<"[2] List all patient in line\n";//display()
    cout<<"[3] Search for patient info\n";//search()
    cout<<"[4] admit patient to clinic\n";//dequeue()
    cout<<"[5] display size of people in queue\n";//linesize()
    cout<<"[0] Exit";
	cout<<"\n=====================\n";
    
	/* get the input from the user */
	if (isatty(STDIN_FILENO))
	{
		queue clinicQ;
		/* interactive */
		while (1)
		{
			
			cout<<"Enter your choice: ";
			cin>> input;
			switch(input){
				case 1://enquaue()
					cout << "enter patient name: " <<endl;
					cin >> ptname1;
					cout << "enter patient phone number: " <<endl;
					cin >> phone;
					clinicQ.enquque(ptname1, phone);
					break;
				case 2://display()
					clinicQ.display();
					break;
				case 3://search()
					cout << "enter patient name to search: " << endl;
					cin >>  searchname;
					exist = clinicQ.search(searchname);
					if (exist == true)
					cout << "patient info exist in line"<<endl;
					else
					cout << "patient info doesn't exist in queue"<<endl;
					break;	
				case 4://dequeue()
					cout << "patient removed from line"<< endl;
					clinicQ.dequeue();
					break;
				case 5://linesize()
					cout << "line length :" << endl;
					queuelength = clinicQ.linesize();
					cout << queuelength<<endl;
					break;
				case 0:
					exit(0);
					break;
			}
		}
	}

	return (0);
}

