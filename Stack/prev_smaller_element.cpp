#include<iostream>
#include<stack>
#include<vector>
using namespace std;

vector<int> prevSmallerElement(int *arr, int &size, vector<int>prev){
    stack<int>st;
    st.push(-1);

    for(int i = 0; i < size; i++){
        int curr = arr[i];

        while(st.top() >= curr){
            st.pop();
        }

        prev[i] = st.top();
        st.push(curr);


    }
    return prev;
}

int main(){

    int arr[5] = {8, 4, 6, 2, 3};
    int size = 5;
    vector<int>prev(size);

    prev = prevSmallerElement(arr, size, prev);
    
    for(auto i: prev){
        cout<<i<<" ";
    }
    cout<<endl;

    return 0;
}