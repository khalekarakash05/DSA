#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void interleave(queue<int>& first){
    int n = first.size();
    queue<int>second;

    //first take first half of the element and push them into the second stack
    for(int i = 0; i<n/2; i++){
        int element = first.front();
        first.pop();
        second.push(element);
    }

    //then push interleave
    for(int i = 0; i<n/2; i++){
        int firstElement = second.front();
        second.pop();
        first.push(firstElement);

        int secondElement = first.front();
        first.pop();
        first.push(secondElement);
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
    // int k = 4;  
    // reverseK(q,k);

    interleave(q);

    while(!q.empty()){
        int elmenet = q.front();
        q.pop();
        cout<<elmenet<<" ";
    }
    cout<<endl;
    return 0;
}