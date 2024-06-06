#include<iostream>
#include<stack>
using namespace std;

int main(){
    string str = "Akash";
    stack<char> st;

    //insert string character the stack element 
    for(int i = 0; i < str.size(); i++){
        char ch = str[i];
        st.push(ch);
    }

    //let's print all the stack element 
    cout<<endl;
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
    return 0;
}