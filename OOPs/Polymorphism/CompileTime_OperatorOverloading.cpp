#include<iostream>
using namespace std;

class vector{
    int x, y;
    public:

    // vector(int x,int y){
    //     this->x=x;
    //     this->y=y;
    // }
    // or
    // Init list
    vector(int x, int y):x(x),y(y){};

    void operator+(const vector &src){
        this->x=this->x+ src.x;
        this->y=this->y+ src.y;

    }


    void display(){
        cout<<"X:"<<x<<" ";
        cout<<"Y:"<<y<<" ";
    }
};
int main(){
    vector v1(2,3);
    vector v2(4,5);
    v1+v2;

    v1.display();

    return 0;
}