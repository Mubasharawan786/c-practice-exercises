#include<iostream>
#include "IntQueue.h"
using namespace std;
//constructor defination
  IntQueue::IntQueue(int s)
{
    queueArray=new int[s];
    queueSize=s;
    front=-1;
    rear=-1;
    numItems=0;
}
//copy construtor
  IntQueue::IntQueue(const IntQueue &obj)
{
    queueArray=new int[obj.queueSize];
    queueSize=obj.queueSize;
    front=obj.front;
    rear=obj.rear;
    numItems=obj.numItems;
    for(int count=0;count<obj.queueSize;count++)
    {
        queueArray[count]=obj.queueArray[count];
    }
}     
//Destructor defination
IntQueue::~IntQueue()
{
    delete []queueArray;
}
//Enqueue defination
void IntQueue::enqueue(int num)
{
    if(isFull())
    {
        cout<<"The queue is full\n";
    }
    else
    {
     rear=(rear+1)%queueSize;
     queueArray[rear]=num;
     numItems++;   
    }
}
//Dequeue defination
void IntQueue::dequeue(int&num)
{
    if(isEmpty())
    {
        cout<<"The queue is empty\n";
    }
    else
    {
        front=(front+1)%queueSize;
        num=queueArray[front];
        numItems--;
    }
}
//IsEmpty function defination
bool IntQueue::isEmpty()const
{
    bool status;
    if(numItems)
       status=false;
    else
      status=true;
    return status;    
} 
//IsFull function defination
 bool IntQueue::isFull()const
{
    bool status;
    if(numItems<queueSize)
       status=false;
    else
      status=true;
    return status;    
}
//clear function defination
void IntQueue::clear()
{
    front= -1;
    rear= -1;
    numItems=0;
}

int main()
{
    const int Max_values=5;
    IntQueue obj(Max_values);
    for(int i=0;i<Max_values;i++)
    {
        obj.enqueue(i);
    }
    cout<<"Now attempting to enqueue one more item\n";
    obj.enqueue(Max_values);
    cout<<"Retriving all the items of the queue\n";
    while(!obj.isEmpty())
    {
        int value;
        obj.dequeue(value);
        cout<<value<<endl;
    }
return 0;
}