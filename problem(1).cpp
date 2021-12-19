//call the base class function from derived class without using scaope resulation

#include<bits/stdc++.h>
using namespace std;
class Base
{
    public :
    void display()
    {
        cout<<"Base"<<endl;
    }
};
class Derived : public Base
{
   public :

   void display()       //function overridding
   {
       cout<<"Derivedd"<<endl;
   }

};
int main()
{
    Derived ob1;
    Base *ptr; //without scope resulation
    ptr=&ob1;
    ptr->display();
  //  ob1.Base::display();//using scope resulation

}
