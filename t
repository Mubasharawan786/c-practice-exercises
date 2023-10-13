
#include <iostream>
using namespace std;
int main() {
    double sales,commissionRate;
    cout<<"Enter your sales and i will tell u your commissionrate"<<endl;our     cin>>sales;
    if(sales<=10000)
  {   
      commissionRate=.10;
      
  }
   else if(sales>=10000 || sales<=15000)
   {
       commissionRate=.15; 
       
   }
   else if (sales>15000)
   {
       commissionRate=.20;
       
   }
   
    cout<<"your commission rate is "<< commissionRate<<endl;
    return 0;
}