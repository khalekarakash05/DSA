#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int>& st, int &element){
    //base case
    if(st.empty()){
        // cout<<"stack is empty";
        st.push(element);
        return;
    }

    //1 case solution
    int temp = st.top();
    st.pop();

    //recurssion
    insertAtBottom(st, element);

    //backtracking
    st.push(temp);
}



//reverse a stack
void reverseStack(stack<int> &st){
    //base case
    if(st.empty()){
        // cout<<"Stack is empty";
        return;
    }

    //1 case solution
    int temp = st.top();
    st.pop();

    //recursive call
    reverseStack(st);

    //backtracking
    insertAtBottom(st, temp);
}

//insertelement in sorted stack
void insertSorted(stack<int> &st, int element){
    //base case
    if(st.empty() || element > st.top()){
        st.push(element);
        return;
    }

    //1 case solution
    int temp = st.top();
    st.pop();

    //recurssive call
    insertSorted(st, element);


    //backtracking
    st.push(temp);
}

void sortStack(stack<int> &st){
    //base case 
    if(st.empty()){
        return;
    }

    //1 case 
    int temp = st.top();
    st.pop();

    //recursive call
    sortStack(st);

    //backtracking
    insertSorted(st, temp);
}

int main() {

    stack<int>st;

    //push
    st.push(10);
    st.push(7);
    st.push(12);
    st.push(5);
    st.push(11);

    int element = 25;

    // insertAtBottom(st, element);

    // reverseStack(st);
    
    // insertSorted(st, element);

    sortStack(st);
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;

    
    // while(!st.empty()){
    //     cout<<st.top()<<" ";
    //     st.pop();
    // }
    // cout<<endl;

    return 0;
}