#include<iostream>
using namespace std;

class Stack{
    public:
    int *arr;
    int size;
    int top;


    Stack(int size){
        arr=new int[size];
        this->size = size;
        this->top = -1;
    }


    //insertion of stack
    void push(int data){
        //checking overflow condition
        if(top == size-1){
            cout<<"Stack is full"<<endl;
            return;
        }
        else{
            top++;
            arr[top] = data;
        }
    }

    //removal of stack element 
    void pop() {
        //checking underflow condition
        if(top == -1){
            cout<<"Stack is empty"<<endl;
            return;
        }
        else{
            top--;
        }
    
    }

    //check is stack empty or not
    bool empty(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }
    }

    //top element of stack
    int getTop(){
        //checking underflow condition
        if(top == -1){
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        else{
            return arr[top];
        }
    }

    //size of stack
    int getSize() {
        //checking underflow condition
        if(top == -1){
            cout<<"stack is empty"<<endl;
            return -1;
        }
        else{
            return top+1;
        }
    }

    //print stack
    void printStack(){
        //checking underflow condition
        if(top == -1){
            cout<<"stack is empty"<<endl;
            return;
        }
        else{
            for(int i=0; i<=top; i++){
                cout<<arr[i]<<" ";
            }
            
            cout<<endl;
            //printing top element of stack
            cout<<"top :"<<top<<endl;
            cout<<"top element of stack is: "<<arr[top]<<endl;
        }
    }
};

int main(){

    //creation 
    Stack st(5);

    //pushing element in stack
    st.push(10);
    st.printStack();

    st.push(20);
    st.printStack();

    st.push(30);
    st.printStack();

    st.push(40);
    st.printStack();

    st.push(50);
    st.printStack();

    st.push(60);
    st.printStack();

    //pop element from stack
    st.pop();
    st.printStack();

    st.pop();
    st.printStack();

    st.pop();
    st.printStack();

    //top element of stack
    cout<<"top element of stack is :"<<st.getTop()<<endl;

    //size of stack
    cout<<"size of stack is :"<<st.getSize()<<endl;

    //check stack is empty or not
    if(st.empty()){
        cout<<"stack is empty"<<endl;
    }
    else{
        cout<<"stack is not empty"<<endl;
    }

    return 0;
}