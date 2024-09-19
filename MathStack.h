#ifndef MATHSTACK_H
#define MATHSTACK_H
#include "Intstack.h"
class MathStack:public Intstack
{
    public:
    //constructor
    MathStack(int s):Intstack(s){} 
  //MathStack operations
  void add();
  void sub();
};
#endif