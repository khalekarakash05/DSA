#include<iostream>
#include<deque>
using namespace std;


int main(){
    deque<int>d;
    //insert from front
    d.push_front(10);
    d.push_back(20);
    d.push_back(30);

    //front and back
    cout<<d.front()<<endl;
    cout<<d.back()<<endl;
    d.pop_back();
    
    cout<<d.back()<<endl;


    cout<<d.size()<<endl;
    return 0;
}