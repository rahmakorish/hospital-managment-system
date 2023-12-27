#include <iostream>
#include <unistd.h>
#include "queue.cpp"
#include <string>
using namespace std;
/**
 * main - Entry point for program
 * Return:0 on success, -1 of failure
 */
int main()
{
	//queue clinicQ;
	int input;
	cout<<"\nCONTACT MANAGEMENT SYSTEM";
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
			cin>>input;
			switch(input){
				case 1://enquaue()
					cout << "You entered: " << input << endl;
					break;
				case 2://display()
					cout << "You entered: " << input << endl;
					break;
				case 3://search()
					cout << "You entered: " << input << endl;
					break;	
				case 4://dequeue()
					cout << "You entered: " << input << endl;
					break;
				case 5://linesize()
					cout << "You entered: " << input << endl;
					break;
				case 0:
					exit(0);
					break;
			}
		}
	}

	return (0);
}
