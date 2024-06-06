#include<iostream>
using namespace std;

class cqueue{
    public: 
    int *arr;
    int size;
    int front;
    int rear;

    cqueue(int size){
        arr = new int[size];
        this->size = size;
        front = -1;
        rear = -1;
    }

    //push
    void push(int data){
        if((rear == size-1 && front == 0) ||(rear == front-1) ){
            cout<<"queue is overflowed no space to push the element in the queue"<<endl;
        }
        else if(rear == -1 && front == -1){
            //empty case
            rear ++;
            front ++;
            arr[rear] = data;
        }
        else if(rear == size-1 && front != 0){
            rear = 0;
            arr[rear] = data;
            
        }
        else{
            rear++;
            arr[rear] = data;
        }
    }

    //pop operation
    void pop(){
        if(rear == -1 && front == -1){
            cout<<"queue is underflowed "<<endl;
        }
        else if(front == rear){
            arr[front] = -1;
            rear = -1;
            front = -1;
        }
        else if(front == size-1){
           
            arr[front] = -1;
             front = 0;
        }
        else{
            arr[front] = -1;
            front ++;
        }
    }

    bool isEmpty(){
        if(rear == -1 && front == -1){
            return true;
        }
        else{
            return false;
        }
    }

    // int getSize(){
    //     if(rear == -1 && front == -1){
    //         return 0;
    //     }
    //     else{
    //         return rear-front+1;
    //     }
    // }

    int getFront(){
        if(front == -1){
            return -1;
        }
        else{
            return arr[front];
        }
    }

    void print(){
        cout<<"front"<<arr[front]<<endl<<"rear"<<arr[rear]<<endl;
        for(int i = 0; i<size; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int  main(){

    cqueue c(6);
    c.print();

    c.push(10);
    c.print();

    c.push(20);
    c.print();

    c.push(30);
    c.print();

    c.push(40);
    c.print();

    c.push(50);
    c.print();

    c.push(60);
    c.print();

    c.push(10);
    c.print();

    c.pop();
    c.pop();
    c.pop();
    c.print();

    c.push(234);
    c.print();

    c.push(200);
    c.print();

    c.push(300);
    c.print();

    c.push(400);
    c.print();

    return 0;
}