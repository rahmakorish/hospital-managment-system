#include <iostream>
#include "mystack.h"
using namespace std;
template <class num>
//constructor
mystack<num>::mystack()
{
top = -1;
MAX = 1000;
}
//copy constructor

//StackisFull-checks if stack is full
mystack<num>::StackisFull()
{
      if (top == MAX-1){
          return true;
      }
      return false;
}
//stack is empty-to check if stack still have space
bool mystack<num>::StackisEmpty(){
      if (top == -1)
      return true;
      else
      return false;
      }
//push function-add element to stack
mystack<num>::push (num data){
        if (StackisFull())
                    {exit(0);}
        else
        {
            top += 1;
            stack_arr[top] = data;
        }
    }
//pop function
num mystack<num>::pop(){
        if(StackisEmpty())
        {exit(0);}
        else
        {
            top -= 1;
            return(stack_arr[top]);
        }
    }
//stacktop function
num mystack<num>::stacktop()
    {
        return(stack_arr[top]);
    }
//stack size function
num mystack<num>::stacksize()
    {
        return(top+1);
    }
//destructor
mystack<num>::~mystack()
{
delete[] stack_arr;
};



