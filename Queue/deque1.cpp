#include<iostream>
using namespace std;

class deque{
    public: 
    int *arr;
    int size; 
    int front;
    int rear;

    deque(int size){
        arr = new int[size];
        this->size = size;
        front = -1;
        rear = -1;
    }

    void push_back(int data){
        if((rear == size-1 && front == 0) || (rear == front-1)){
            //queue overflow condition
            cout<<"queue overflow"<<endl;
        }
        else if(rear == -1 && front == -1){
            front++;
            rear++;
            arr[rear] = data;
        }
        else if(rear == size-1 && front != 0){
            rear = 0;
            arr[rear] = data;
        }
        else{
            rear ++;
            arr[rear] = data;
        }
    }

    void push_front(int data){
        if((rear == size-1 && front == 0) || (rear == front-1)){
            cout<<"queue overflowed"<<endl;
        }
        else if(rear == -1 && front == -1){
            rear++;
            front ++;
            arr[front] = data;
        }
        else if(front == 0 && rear != size-1){
            front = size-1;
            arr[front] = data;

        }
        else{
            front--;
            arr[front] = data;
        }
    }

    void pop_front(){
        if(rear == -1 && front == -1){
            cout<<"queue underflowed"<<endl;
        }
        else if(rear == front){
            arr[front] = -1;
            front =-1;
            rear = -1;
        }
        else if(front == size-1){
            arr[front] = -1;
            front = 0;
        }
        else{
            arr[front] = -1;
            front++;
        }
    }

    void pop_back(){
        if(front == -1 && rear == -1){
            cout<<"underflowed queue"<<endl;
        }
        else if(front ==rear){
            arr[rear] = -1;
            rear = -1;
            front = -1;
        }
        else if(rear == 0){
            arr[rear] = -1;
            rear = size-1;
        }
        else{
            arr[rear] = -1;
            rear --;
        }
    }

    void print(){
        for(int i = 0; i<size; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){

    deque d(6);
    d.push_back(12);
    d.push_front(42);
    // d.push_front(20);
    // d.push_back(22);

    // d.pop_back();
    // d.pop_back();
    // d.pop_back();
    // d.push_back(22);
    // d.push_back(222);
    d.print();

    return 0;
}