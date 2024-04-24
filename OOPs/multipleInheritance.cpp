#include<iostream>
#include<string>
using namespace std;


class Person{
    public:
    void walk(){
        cout<<"Walking ..."<<endl;
    }
};
// class Teacher:public Person
class Teacher:virtual public Person{
    public:
    void teach(){
        cout<<"Teaching ..."<<endl;
    }
};
// class Researcher:public Person
class Researcher:virtual public Person{
    public:
    void research(){
        cout<<"Researching ..."<<endl;
    }
};
class Professor:public Teacher,public Researcher{
    public:
    void bore(){
        cout<<"Boring ..."<<endl;
    }
};
int main(){
    Professor p;
    p.teach();

    // Diamond Problem
    // Solution 1=> Scope Resolution
    p.Teacher::walk();
    p.Researcher::walk();

    // Solution 2=>virtual =>virtual ki madat se walk() ki same copy la rahu hu
    
    p.walk();

    return 0;
}