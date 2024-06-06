#include<iostream>
using namespace std;

class Stack{
    public:
        int* arr;
        int size;
        int top1;
        int top2;

        Stack(int size){
            arr = new int[size];
            this->size = size;
            top1 = -1;
            top2 = size;
        }

        void push1(int data){
            if((top2-top1)==1){
                cout<<"OVERFLOW";
            }
            else{
                top1++;
                arr[top1] = data;
            }
        }

        void push2(int data){
            if((top2-top1)==1){
                cout<<"OVERFLOW";
            }
            else{
                top2--;
                arr[top2] = data;
            }
        }

        void pop1(){
            if(top1 == -1){
                cout<<"UNDERFLOW";
            }
            else{
                top1[arr] = 0;
                top1--;
            }
        }
        
        void pop2(){
            if(top2 == size){
                cout<<"UNDERFLOW";
            }
            else{
                top2[arr] = 0;
                top2++;
            }
        }

        void print(){
            cout<<endl;
            for(int i = 0; i< size; i++){
               cout<<arr[i]<<" "; 
            }
            cout<<endl;
        }
};

int main(){
    Stack st(6);
    // st.print();

    st.push1(2);
    // st.print();

    st.push1(4);

    st.push2(100);
    // st.print();

    st.push2(200);
    st.push2(300);
    st.push2(400);
    // st.print();

    // st.push2(22);

    st.pop1();
    st.pop1();
    // st.pop1();
    st.print();

    return 0;
}