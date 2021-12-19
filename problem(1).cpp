#include<bits/stdc++.h>
using namespace std;
class Person
{
    public :
    int age;
    string name;
    void Set(int age,string name)
    {
        this->age=age;
        this->name=name;
        cout<<"age : "<<age<<" "<<"name : "<<name<<endl;
    }
};
class Student : public Person
{
   public :

   int Sage;
   string Sname;
   void Set(int Sage,string Sname)
   {
       this->Sage=Sage;
       this->Sname=Sname;
   }

};
class Teacher : public Person
{
    public :

    int Tage;
    string Tname;
    void Set(int Tage,string Tname)
    {
        this->Tage=Tage;
        this->Tname=Tname;
    }

};
int main()
{
    Student ob1;
    Person *ptr;
    ptr=&ob1;
    ptr->Set(23,"Labib");
    Teacher ob2;
    ptr=&ob2;
    ptr->Set(26,"Aditi Mam");
}





