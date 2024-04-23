#include<iostream>
using namespace std;

class stack{
    public: 
    int *arr;
    int size;
    int top1;
    int top2;

    stack(int size){
        arr = new int(size);
        this->size = size;
        top1 = -1;
        top2 = size; 
    }

    //push the element from 1st stack
    void push1(int data){
        if(top2 - top1 == 1){
            cout<<"OVERFLOW";
        }
        else{
            top1++;
            arr[top1] = data;
        }
    }

    //push the element from 2nd stack
    void push2(int data){
        if(top2-top1 == 1){
            cout<<"OVERFLOW";
        }
        else{
            top2--;
            arr[top2] = data;
        }
    }

    //pop the element of 1st stack
    void pop1(){
        if(top1 == -1){
            cout<<"UNDERFLOW";
        }
        else{
            arr[top1] = 0;
            top1--;
        }        
    }

    //pop the element of 2nd stack
    void pop2(){
        if(top2 == size){
            cout<<"UNDERFLOW";
        }
        else{
            arr[top2] = 0;
            top2++;
        }
    }
    void print(){
        cout<<endl;
        cout<<"top1: "<<top1<<endl;
        cout<<"top2: "<<top2<<endl;
        for(int i=0; i<size; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){
    stack st(10);
    st.print();

    st.push1(2);
    st.print();

    st.push1(3);
    st.print();

    st.push1(4);
    st.print();

    st.push1(6);
    st.print();

    st.push2(100);
    st.print();

    st.push2(200);
    st.print();

    st.push2(300);
    st.print();

    st.push2(400);
    st.print();

    st.push2(500);
    st.print();

    st.push2(600);
    st.print();

    // st.push1(700);
    // st.print();

    st.pop1();
    st.pop1();
    st.pop1();
    st.pop1();
    st.print();
    // st.pop1();
    // st.print();


    st.pop2();
    st.pop2();
    st.pop2();
    st.pop2();
    st.pop2();
    st.pop2();
    // st.print();
    //here i am doing changes 
    st.pop2();

    return 0;

}