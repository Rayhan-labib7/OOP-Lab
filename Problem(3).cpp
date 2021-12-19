#include<bits/stdc++.h>
using namespace std;
void Human()
{
    class Preson
    {
        public :

        int age;
        string name;
        void Set(int age,string name)
        {
            this->age=age;
            this->name=name;
        }
        void displayperson()
        {
            cout<<age<<" "<<name<<endl;
        }
    };
    Preson ob1;
    ob1.Set(23,"Labib");
    ob1.displayperson();
}


int main()
{
    Human();


}
