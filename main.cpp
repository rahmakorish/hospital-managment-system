#include <iostream>
#include "mystack.h"
using namespace std;

int main()
{
    mystack<int> stacky;
    stacky.push(9);
    cout<< stacky.stacktop();

    return 0;
}

