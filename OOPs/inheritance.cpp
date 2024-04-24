#include<iostream>
#include<string>
using namespace std;
class Bird{
    public:
    int age;
    int weight;
    string colors;
    int noOfLeg;

    void eat(){
        cout<<"Bird is eating "<<endl;
    }
    void fly(){
        cout<<"Bird is flying "<<endl;
    }
};

class Sparrow: private Bird{
    public:
    Sparrow(){
        cout<<"Default Constructor is called"<<endl;
    }
     Sparrow(int age,int weight, int noOfLeg,string colors){
        cout<<"Parameterized Constructor is called "<<endl;
        this->age=age;
        this->weight=weight;
        this->colors=colors;
        this->noOfLeg=noOfLeg;

     }

     // getter
    int getNol(){
        return this->noOfLeg;
        // return this->color;
    }
    int getAge(){
        return this->age;
    }
    int getWeight(){
        return this->weight;
    }
    



    // Setter
   
    void setColor(string color){
        this->colors=colors;
    }
     string getColor(){
        return this->colors;
    }
    


    void grass(){
        cout<<"Sparrow is grassing"<<endl;
    }
    
};
class Peigon:public Bird{
    void guttering(){
    cout<<"Peigon is Guttering"<<endl;
    }
};
int main(){
    Sparrow s2();
    Sparrow s(5,10,4,"Brown");
    cout<<s.getNol()<<endl;
    cout<<s.getAge()<<endl;
    cout<<s.getWeight()<<endl;
    s.setColor("Green");
    cout<<s.getColor()<<endl;






    return 0;
}