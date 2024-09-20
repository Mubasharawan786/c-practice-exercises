#ifndef DYNINTSTACK_H
#define DYNINTSTACK_H
class DynIntStack
{
    private:
    //structor for stack node
    struct stackNode
    {
        int value;
        stackNode*next;
    };
    stackNode*top;
    public:
    //constructor
	DynIntStack()
    {
        top=nullptr;
    };
    //Destructor
    ~DynIntStack();
    //stack operations
    void push(int);
    void pop(int&);
    bool IsEmpty();    
}; 
#endif
 