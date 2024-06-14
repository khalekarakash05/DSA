#include<iostream>
#include<stack>
#include<queue>
using namespace std;


void reverseK(queue<int> & q, int k){

    if(k > q.size() || k == 0){
        return;
    }
    //first push k elments into the stack
    stack<int>st;
    for(int i = 0; i<k; i++){
        int element = q.front();
        q.pop();
        st.push(element);
    }


    //then pop them from stack and push them into the queue
    while(!st.empty()){
        int elment = st.top();
        st.pop();
        q.push(elment);
    }


    //then pop n-k elment from queue and again push into the queue
    for(int i = 0; i<q.size()-k; i++){
        int elment = q.front();
        q.pop();
        q.push(elment);
    }
}


int main(){

    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    int k = 4;
    reverseK(q,k);

    while(!q.empty()){
        int elmenet = q.front();
        q.pop();
        cout<<elmenet<<" ";
    }
    cout<<endl;
    return 0;
}