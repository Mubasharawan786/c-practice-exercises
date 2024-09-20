#include<iostream>
#include "DynIntStack.h"
using namespace std;
//Destrucot defination
DynIntStack::~DynIntStack()
{
    stackNode*nodePtr=nullptr;
    stackNode*nextNode =nullptr;
    nodePtr=top;
    while(nodePtr!=nullptr)
    {
        nextNode=nodePtr->next;
        delete nodePtr;
        nodePtr=nextNode;
    }
} 

//Defining the push function for the dynamic stack class
void DynIntStack::push(int num)
{
  stackNode*newNode= new stackNode;
  newNode->value=num;
  if(IsEmpty())
  {
    top=newNode;
    newNode->next=nullptr;
  }
  else
  {
    newNode->next=top;
    top=newNode;
  }
}

//DefininG the pop function of the Dynamic stack class
void DynIntStack::pop(int&num)
{
    stackNode*temp=nullptr;
    if(IsEmpty())
    {
        cout<<"The stack is empty."<<endl;
    }
    else
    {
        num=top->value;
        temp=top->next;
        delete top;
        top=temp;
    }
}

//defining the is empty function of the dynamic stack class
bool DynIntStack::IsEmpty()
{
  bool status;
  if(!top )
   status=true;
  else
   status=false;
 return status;
}

