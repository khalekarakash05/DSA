#include<iostream>
#include<stack>
using namespace std;


void solve(stack<int> &st, int pos, int& ans){
    //base case
    if(pos == 1){
        ans = st.top();
        return ;
    }

    pos--;
    int temp = st.top();
    st.pop();

    //recursive call
    solve(st, pos, ans);

    //backtracking 
    st.push(temp);
}

int getmiddle(stack<int>& st){
    int size = st.size();
    cout<<"size of the stack is "<<size<<endl;

    if(st.empty()){
        cout<<"stack is empty"<<endl;
        return -1;
    }
    else{
        int pos = 0;
    if(size & 1){
        //then size of the stack is odd
        //then postion should be 
        pos = size/2 +1;
        cout<<"position "<<pos<<endl;
    }
    else{
        //size of the stack is even 
        pos = size/2;
        cout<<"position "<<pos<<endl;
    }

    int ans = -1;
    solve(st, pos, ans);
    
    return ans;
    }
}

int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    // st.push(60);

    int mid = getmiddle(st);
    cout<<"middle element of the stack is : "<< mid<<endl;
    return 0;
}