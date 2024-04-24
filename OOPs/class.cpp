#include<iostream>
#include<string>
using namespace std;

class  Student
{
private:
    /* data */
    string gf;
public:
    int age;
    int id;
    string name;
    bool present;
    int* v;

    // Default constructor
    Student(){
        cout<<"Student ctor called"<<endl;
    }

    // // Parameterized constructor without gf
    Student(int _age, int _id, string _name,bool _present){
        age=_age;
        id=_id;
        name=_name;
        present=_present;
    }
    // Parameterized constructor 
    Student(int _age, int _id, string _name,bool _present,string _gf){
        age=_age;
        id=_id;
        name=_name;
        present=_present;
        gf=_gf;
    }

    // Copy Constructor
    Student(const Student& srcObj){
        // Const keyword is used for read only (ye prperties me change nahi klarne deta)
        this->name=srcObj.name;
        this->age=srcObj.age;
        this->gf=srcObj.gf;
        this->id=srcObj.id;
        this->v=new int(12);
        cout<<endl<<"Copy Constructor Called"<<endl;
    }

    // Destructor
    ~Student(){
        cout<<"Destructor called"<<endl;
        delete v;
    }


    
    // Getter  => for accessing the private variables
    string getGfName(){
        return gf;
    }

    // setter =>for changing =>ex. change the gf 
    void setGfName(string gf){
        this->gf=gf;
    }

    void study(){
        cout<<"Studying"<<endl;
    }
    void sleep(){
        cout<<"Sleeping"<<endl;
    }
    void bunk(){
        cout<<"Bunking"<<endl;
    }
    private:
    void gfChatting(){
        cout<<"Chatting"<<endl;
    }
};



int main(){

    // cout<<sizeof(Student);
    Student s1;

    Student s2(15,2,"Chaitanya",1);
    cout<<endl<<s2.name<<endl;
    cout<<s2.present<<endl;

    Student s3(19,3,"Sanchit",0,"sai");
    cout<<s3.present<<endl;
    cout<<s3.name<<endl;
    cout<<s3.getGfName()<<endl;
    s3.setGfName("Muskan");
    cout<<s3.getGfName()<<endl;

    // Allocating on heap
    Student *s4=new Student(21,5,"Akash",1);
    cout<<s4->name<<endl;

    // Student s5;
    
    // s5=s3; => copy constructor call nahi hoga => copy constructor sirf construction ke samay call hota hai

    // Student s5=s3; =>isliye object banate samay hi copy karana hai

    // or
    Student s5(s3);
    cout<<s3.name<<endl;
    cout<<s5.name<<endl;




//     Student s1;
//     s1.age=15;
//     s1.name="Akash";
//     s1.id=2;
//     s1.present=0;
//     s1.sleep();
//     s1.study();
//     s1.bunk();


    
//     Student s2;
//    s2.age=19;
//     s2.name="Sarthak";
//     s2.id=5;
//     s2.present=1;
//     s2.sleep();
//     s2.study();
//     s2.bunk();

    
    return 0;
}