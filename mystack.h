#ifndef MYSTACK_H
#define MYSTACK_H

template <class num>
class mystack
{
num top, MAX, stack_arr[1000];

public:
mystack();
mystack(mystack &S);

bool StackisFull();
bool StackisEmpty();
void push (num data);
num pop();
num stacktop();
int stacksize();

~mystack();
};
#endif
