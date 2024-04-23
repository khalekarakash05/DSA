#include<iostream>
#include<stack>
using namespace std;


void solve(stack<int> &st, int pos, int &ans){
    //base case
    if(pos == 1){
        ans = st.top();
        return ;
    }


    //1 case solution
    pos--;
    int temp = st.top();
    st.pop();

    //recursive solution
    solve(st, pos, ans);

    //backtracking
    st.push(temp);

}

int getMiddleElement(stack<int> &st){
    //check is stack is empty
    int size = st.size();
    cout<<"size: "<<size<<endl;
    if(st.empty()){
        cout<<"stack is empty"<<endl;
        return -1;
        
    }
    else{
        //find position for odd as well as even numbers
        int pos = 0;
        if(size & 1){
            //odd size stack
            pos = size/2 +1;
            cout<<"pos: "<<pos<<endl;
        }
        else{
            //even size stack
            pos = size/2;
        }
        int ans = -1;
        solve(st, pos, ans);
        return ans;
    }
}

int main (){
    stack<int>st;

    //insert element 
    // st.push(10);
    // st.push(20);
    // st.push(30);
    // st.push(70);
    // st.push(90);
    // st.push(100);

    int middle = getMiddleElement(st);
    cout<<"middle element of a stack is : "<<middle<<endl;

    return 0;
}