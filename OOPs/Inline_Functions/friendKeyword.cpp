#include<iostream>
using namespace std;

class A{
    private:
        int x;
    public:
        A(int _val):x(_val){};

        // getter function
         int getX () const{
            return x;
        }

        //setter function
        void setX(int _val){
            x = _val;
        }


        // friend function
        friend class B;
        friend void print(const A &);
};

class B {
    public:
        void print(const A &a){
        cout<<"The value of x is: "<<a.x<<endl;
        // cout<<"The value of x is: "<<a.getX()<<endl;
        }
};

//friend function
void print(const A &a){
    cout<<"The value of x is: "<<a.x<<endl;
    // cout<<"The value of x is: "<<a.getX()<<endl;
}

int main(){

    A a(10);
    B b;
    b.print(a);
    print(a);
    return 0;
}