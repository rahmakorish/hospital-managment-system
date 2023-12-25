#include <iostream>
#include "mystack.h"
using namespace std;
void sort(mystack &s)
{
        mystack tmpstack;
        int tmp;

        if s.StackisEmpty()
        return;
        else
	{
		tmp = s.top();
        	s.pop();
	}
        while (tmpstack.StackisFull() && tmpatck.stacktop()> tmp)
	{
		s.push(tmpstack.stacktop());
        tmpstack.pop();
	}

}

int main()
{
    mystack<int> stacky;
    stacky.push(9);
    stacky.push(5);
    stacky.push(8);
    cout<<"stack top:"<<stacky.stacktop()<<'\n';
    for (int i = 0; i<(stacky.MAX); i++)
	cout<<"stack before sorting "<<stacky.stack_arr[i]<<'\n';

    sort(stacky);

    for (int i = 0; i<(stacky.MAX); i++)
        cout<<"stack before sorting "<<stacky.stack_arr[i]<<'\n';


    return 0;
}

