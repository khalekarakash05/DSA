#include<iostream>
using namespace std;

class KQueue{
    public:
    int *arr, *front, *rear, *next;
    int freespot;
    int k, n;


    KQueue(int k, int n):k(k), n(n){
        arr = new int[n];
        front = new int[k];
        rear = new int[k];
        next = new int[n];

        freespot = 0;

        for(int i = 0; i<k; i++){
            front[i] = rear[i] = -1;
        }

        for(int i = 0; i < n-1; i++){
            next[i] = i+1;
        }
        next[n-1] = -1;
    }

    //push element in qith queue
    bool push(int x, int qi){
        //overflow
        if(freespot == -1){
            cout<<"Overflow"<<endl;
            return false;
        }

        //get the index of the free spot
        int index = freespot;

        //update the free spot
        freespot = next[index];

        //if the queue is empty
         if (rear[qi] == -1) {
            front[qi] = index;
        }
        else{ 
            //update the next of the rear of the queue
            next[rear[qi]] = index;
        }

        //update the next 
        next[index] = -1;

        //update the rear of the queue
        rear[qi] = index;
        arr[index] = x;
        return true;
    }


    //pop element from the ithquque
    int pop(int qi){
        //underflow
        if(front[qi] == -1){
            cout<<"Underflow"<<endl;
            return -1;
        }

        //get the index of the front of the queue
        int index = front[qi];
        //update the front of the queue
        front[qi] = next[index];
        //update the next of the index
        next[index] = freespot;
        //update the free spot
        freespot = index;
        //return the element
        cout<<"Popped element is:  "<<arr[index]<<endl;
        int poppedElement = arr[index];
        arr[index] = -1;
        return poppedElement;
    }
};


int main(){

    KQueue kq(3, 10);
    kq.push(15, 2);

    kq.push(45, 2);

    kq.push(17, 1);

    kq.push(49, 1);

    kq.pop(2);



    for(int i = 0; i<10; i++){
        cout<<kq.arr[i]<<" ";
        
    }

    return 0;
}