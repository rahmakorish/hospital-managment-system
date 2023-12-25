#ifndef MYSTACK_H
#define MYSTACK_H

template <class num>
class mystack
{
public:
num top, MAX, stack_arr[10];

public:
mystack(){
top = -1;
MAX = 10;
for(int x = 0; x < 10; x++)
	stack_arr[x] = 0;
}
mystack(mystack &S)
{
top = -1;
MAX = S.MAX;
for (int i = 0; i < top; i++)
stack_arr[i] = S.stack_arr[i];
}
bool StackisFull()
{
      if (top == MAX-1){
          return true;
      }
      return false;
}
bool StackisEmpty()
{
      if (top == -1)
      return true;
      else
      return false;
      }
void push (num data)
{
        if (StackisFull())
        {exit(0);}
        else
        {
            top += 1;
            stack_arr[top] = data;
        }
}
num pop()
{
        if(StackisEmpty())
        {exit(0);}
        else
        {
            top -= 1;
            return(stack_arr[top]);
        }
}
num stacktop()
 {
        return(stack_arr[top]);
}
int stacksize()
{
        return(top+1);
}
~mystack()
{
}
};
#endif
