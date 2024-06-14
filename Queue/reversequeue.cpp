#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void reverseQueue(queue<int>& q){
    stack<int>st;

    while(!q.empty()){
        int frontElement = q.front();
        q.pop();
        st.push(frontElement);
    }

    while(!st.empty()){
        int element = st.top();
        st.pop();
        q.push(element);
    }
}

//reverse the queue using recurssion

void reverse(queue<int>&q){
    //base case
    if(q.empty()){
        return ;
    }

    int element = q.front();
    q.pop();

    //recursive call
    reverse(q);

    //backtracking
    q.push(element);
}

int main(){

    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);

    // while(!q.empty()){
    //     int element = q.front();
    //     q.pop();

    //     cout<<element<<" ";
    // }
    // cout<<endl;    

    // reverseQueue(q);

    reverse(q);

    while(!q.empty()){
        int element = q.front();
        q.pop();

        cout<<element<<" ";
    }
    cout<<endl;

    
    return 0;
}