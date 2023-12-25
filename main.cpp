#include <iostream>
#include "mystack.h"
using namespace std;

int main()
{
    mystack<int> stacky;
    stacky.push(9);
    stacky.push(5);
    stacky.push(8);
    cout<<"stack top:"<<stacky.stacktop()<<'\n';

    return 0;
}

