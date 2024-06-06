#include<iostream>
using namespace std;

class Stack {
    public: 
    int* arr;
    int size; 
    int top;

    Stack(int size){
        arr = new int[size];
        this->size = size;
        this->top = -1;
    }

    void push(int data){
        if(top == size-1){
            cout<<"stack is overflow"<<endl;
        }
        else{
            top++;
            arr[top] = data;
        }
    }

    void pop(){
        if(top == -1){
            cout<<"Stack is underflow"<<endl;
        }
        else{
            top--;
        }
    }

    bool isEmpty(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }
    }

    int getTop(){
        if(top == -1){
            return -1;
        }
        else{
            return arr[top];
        }
    }

    int getSize(){
        return top+1;
    }

    void print(){
        cout<<"Stack"<<endl;
        for(int i = 0; i<getSize() ; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){
    Stack st(8);

    st.push(2);
    st.print();

    st.push(4);
    st.print();

    st.push(6);
    st.print();

    st.push(4);
    st.print();

    st.push(4);
    st.print();

    st.push(4);
    st.print();

    st.push(4);
    st.print();

    st.push(4);
    st.print();

    st.push(4);
    st.print();

    cout<<"size of the stack is "<<st.getSize()<<endl;
    cout<<"top element of the stack is : "<<st.getTop()<<endl;

    st.pop();
    st.print();

    st.pop();
    st.print();

    st.pop();
    st.print();

    st.pop();
    st.print();

    st.pop();
    st.print();

    st.pop();
    st.print();

    st.pop();
    st.print();

    st.pop();
    st.print();

    st.pop();
    st.print();
    return 0;


}