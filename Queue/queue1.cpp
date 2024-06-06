#include<iostream>
#include<queue>
using namespace std;

int main(){
    //queue creation
    queue<int>q;

    //insertion in a queue
    q.push(5);

    //size of the queue
    // q.size();
    cout<<"size of the newly created queue is : "<<q.size()<<endl;

    //empty 
    if(q.empty()){
        cout<<"queue is empty "<<endl;
    }
    else{
        cout<<"queue is not empty"<<endl;
    }

    //delete from the queue 
    q.pop();

    cout<<"size of the queue is now : "<<q.size()<<endl; 


    //empty 
    if(q.empty()){
        cout<<"queue is empty "<<endl;
    }
    else{
        cout<<"queue is not empty"<<endl;
    }

    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    cout<<"last element in the queue is : "<<q.back()<<endl;
    cout<<"first element in the queue is : "<<q.front()<<endl;   
    return 0;
}