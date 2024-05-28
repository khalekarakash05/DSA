#include<iostream>
#include<stack>
#include<vector>
using namespace std;

vector<int> next_smaller_element(int* arr, int &size, vector<int>ans){
    stack<int>st;
    st.push(-1);

    for(int i = size-1; i>=0; i--){
        int curr = arr[i];

        if(st.top() >= curr){
            st.pop();
        }

        ans[i] = st.top();

        st.push(curr);
    }
    return ans;
}

int main(){
    int arr[] = {8, 4, 6, 2, 3};
    int size = 5;

    vector<int>ans(size);

    ans = next_smaller_element(arr, size, ans);

    for(auto i: ans){
        cout<<i<< " ";
    }
    cout<<endl;

    return 0;
}