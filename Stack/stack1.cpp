#include<iostream>
#include<stack>
using namespace std;

int main(){

    //creation of a stack
    stack<int>st;

    //insertion of a stack
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);


    //size of stack
    cout<<"size of stack is :"<<st.size()<<endl;

    //removal of element in stack
    st.pop();

    //check empty or not 
    if(st.empty()){
        cout<<"stack is empty"<<endl;
    }
    else{
        cout<<"stack is not empty"<<endl;
    }


    //top element of stack
    cout<<"top element of stack is :"<<st.top()<<endl;

    return 0;
}