#include <iostream>
#include "mystack.h"
using namespace std;

void sort(mystack<int> &s)
{
	mystack<int> tmps;
	int temp,top =s.stacktop();

	if(s.StackisEmpty())
		return;
	else{
		for(int i = 0; i <= (top -1); i++)
		{
			for(int j=0; j <=top;j++){
			if(s.stack_arr[i] > s.stack_arr[j]){
				temp = s.stack_arr[i];
				s.stack_arr[i] = s.stack_arr[j];
				s.stack_arr[j] = temp;
			}
			}
		}
	}
}

int main()
{
    mystack<int> stacky;
    stacky.push(9);
    stacky.push(5);
    stacky.push(8);
    cout<<"stack top:"<<stacky.stacktop()<<'\n';
   for (int i = 0; i<(stacky.stacksize()); i++)
	cout<<"stack before sorting "<<stacky.stack_arr[i]<<'\n';

   sort(stacky);

    for (int i = 0; i<(stacky.stacksize()); i++)
        cout<<"stack after sorting "<<stacky.stack_arr[i]<<'\n';


    return 0;
}

