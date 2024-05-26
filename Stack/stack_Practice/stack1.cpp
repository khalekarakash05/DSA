#include<iostream>
#include<stack>
using namespace std;

int main(){

    stack<int> st;
    
    //inserting elements to the stack
    st.push(10);
    st.push(20);
    st.push(30);

    //size of the stack is 
    cout<<"size of the stack is : "<<st.size()<<endl;

    //removing the elements from stack
    st.pop();

    //checking is stack empty or not
    if(st.empty()){
        cout<<"stack is empty"<<endl;

    }
    else{
        cout<<"stack is not empty"<<endl;
    }

    

    return 0;
}