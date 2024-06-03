#include<iostream>
using namespace std;

class Nstack{
    int *a, *top, *next;
    //3 array create kar diye hai
    //a array original array hogan jis me stack ko implement karenge 
    //top array  me har ek stack ka top elment ka index store hoga
    //next array me pehle freespot hoga bad me update kar ke top ka next k index hoga

    int size;//size of actual array
    int n;//total no of stack to be implemented in an array
    int freespot;//storing index of freespace in main array

    public:

    //let's create a constructor
    Nstack(int _n, int _s):n(_n) , size(_s){
        a = new int[size];
        top = new int[n];
        next = new int[size];
        freespot = 0;


        //now first initialize all the top element with -1
        for(int i = 0; i<n; i++){
            top[i]= -1;
        }

        //after that initialize free space in next array 
        for(int i =0;i<size; i++){
            next[i] = i+1;
        }
        //aur last element ko -1 se initialize karenge
        next[size-1] = -1;


       
    }
     //push operation implementation
        //push x element in mth stack
        bool push(int x, int m){
            //first check the overflow condition
            if(freespot == -1){
                return false;
            }

            //1. find index 
            int index = freespot;

            //2. update that freespot
            freespot = next[index];

            //3. insert in an array with that index 
            a[index] = x;

            //4. update the next index
            next[index] = top[m-1];

            //5. update the top index;
            top[m-1] = index;// it will point to top element of that respective stack

            return true;//push has been successful
        }

        //pop top  element from mth stack
        int pop(int m){
            //first check the underflow condition in stack
            if(top[m-1] == -1){
                return -1;
            }

            int index = top[m-1];

            top[m-1] = next[index];

            int poppedElement = a[index];

            next[index] = freespot;

            freespot = index;

            return poppedElement;

        }   
    

    //let's implement a destructor
    ~Nstack(){
        delete[] a;
        delete[] top;
        delete[] next;
    }

};

int main(){
    Nstack s(3, 6);
    cout<<s.push(10, 1);
    cout<<endl;
    cout<<s.push(10, 1)<<endl;
    cout<<s.push(10, 1)<<endl;
    cout<<s.push(10, 1)<<endl;
    cout<<s.push(23, 1)<<endl;
    // cout<<s.push(102, 1)<<endl;
    cout<<s.pop(1)<<endl;
    cout<<s.pop(1);
    cout<<endl;

    return 0;
}