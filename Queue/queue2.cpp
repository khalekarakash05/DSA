#include<iostream>
using namespace std;

class queue{
    public: 
    int *arr;
    int size; 
    int front;
    int rear;

    //create the constructor
    queue(int size){
        arr = new int(size);
        this->size = size;
        front = -1;
        rear = -1;
    }

    //push element in the queue
    void push(int data){
        if(rear == size-1){
            //condition to check wheather the queue is overflowed
            cout<<"queue is overflowed can't push in the queue"<<endl;
        }
        else if(rear == -1 && front == -1){
            rear++;
            front++;
            arr[rear] = data;
        }
        else{
            rear ++;
            arr[rear] = data;
        }
    }

    //pop the element from the queue
    void pop(){
        if(rear == -1 && front == -1){
            cout<<"queue is underflowed can't pop element from the queue"<<endl;
        }
        else if(rear == front){
            //single element hai to 
            arr[front] = -1;
            front = -1;
            rear = -1;
        }
        else{
            arr[front] = -1;
            front++;
        }
    }

    //check that is queue empty or not
    bool isEmpty(){
        if(front == -1 && rear == -1){
            return true;
        }
        else{
            return false;
        }
    }

    //give the size of the queue
    int getSize(){
        if(rear == -1 && front == -1){
            return 0;
        }
        else{
            return rear - front +1;
        }
    }

    //now give the front element of the queue
    int getFront(){
        if(front == -1){
            cout<<"no element on the front as queue is empty can't give the element"<<endl;
            return -1;
            //queue is empty there is no element in the queue
        }
        else{
            return arr[front];
        }
    }

    //get rear element from the queue
    int getRear(){
        if(rear == -1){
            return -1;
        }
        else{
            return arr[rear];
        }
    }

    void print(){
        cout<<"implemented queue is looks like: "<<endl;
        for(int i = 0; i<size; i++){
            cout<<arr[i]<<' ';
        }
        cout<<endl;
    }
    
};

int main(){
    queue q(7);
    q.print();
    q.push(23);

    q.print();

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    // q.push(70);
    q.print();

    q.pop();
    q.pop();
    q.print();

    cout<<"size of the queue is :"<<q.getSize()<<endl;
    cout<<"front element of the queue is : "<<q.getFront()<<endl;
    cout<<"rear element of the queue is: "<<q.getRear()<<endl;

    return 0;
}

