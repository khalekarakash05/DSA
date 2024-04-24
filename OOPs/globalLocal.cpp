#include <iostream>
using namespace std;
 int x=4;
 int fun(){
    int x=30;
    cout<<x<<endl;
    cout<<::x<<endl;
 }
 int main(){
    int x=10;
    cout<<::x<<endl;
    cout<<x<<endl;

    {
        int x=20;
        cout<<x<<endl;
        cout<<::x<<endl;
    }
    fun();
    return 0;
 }