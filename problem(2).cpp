#include<bits/stdc++.h>
using namespace std;
class Abstruct
{
   public :
   virtual void display()=0;
};
class Derived : public Abstruct
{
    public :
    void display()
    {
        cout<<"Labib"<<endl;
    }
};
int main()
{
    Derived ob1;
    Abstruct *ptr;
    ptr=&ob1;
    ptr->display();
}
