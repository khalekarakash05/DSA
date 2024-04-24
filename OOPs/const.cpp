#include<iostream>
using namespace std;
int main(){

    //const int a=9;//a is constant
    // Initialization can be done
    // But we can't re-assign value
    // int a=2;
    // cout<<a<<endl;





    // Const data but non const pointer
    // const int *a=new int(12);//Const data and Non const pointer
    // // int const *a =new int(13); it is same as above line
    // cout<<*a<<endl;
    // int b=20;
    // // *a=20; //cannot change the content of pointer
    // a=&b;//pointer itself can be reassigned
    // cout<<*a<<endl;
    //  // cout<<*a<<endl;
    // // int b=5;
    // // *a=b;
    // // cout<<*a<<endl;
    
 

    // Const pointer , but non const data
    int *const a=new int(12);
    cout<<*a<<endl;
    *a=20;//ye chal jayega
    cout<<*a<<endl;
    int b=5;
    // a=&b;//ye nahi chalega 
    // cout<<*a<<endl;



    // Pointer Constant && Data Constant
    const int *const a=new int(12);
    cout<<*a<<endl;
    // *a=20;//ye kuch bhi nahi chalega
    // cout<<*a<<endl;
    // int b=5;
    // a=&b;
    // cout<<*a<<endl;



    

    return 0;
}