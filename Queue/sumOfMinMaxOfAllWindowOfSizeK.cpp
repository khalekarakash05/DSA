#include<iostream>
#include<deque>
#include<vector>
using namespace std;

int sumOfMinMaxOfAllWindowOfSizeK(vector<int>& v,  int k){
    int ans = 0;

    deque<int>dq;//for max elements
    deque<int>dq2;//for min elements

    //lets find out min and max element first for first sliding window
    for(int i = 0; i<k; i++){
        int element = v[i];
        while(!dq.empty() && element >= v[dq.back()]){
            dq.pop_back();
        }
        


        while(!dq2.empty() && element <= v[dq2.back()]){
            dq2.pop_back();
        }
        dq.push_back(i);
        dq2.push_back(i);

        
    }
    ans = ans + v[dq.front()] + v[dq2.front()];

    //now calculate the answer for remaining sliding windows
    for(int i = k ; i<v.size(); i++){
        // ans = ans + dq.front() + dq2.front();

        //remove the out of window element
        if(!dq.empty() && i-dq.front() >= k){
            dq.pop_front();
        }

        if(!dq2.empty() && i-dq2.front() >= k){
            dq2.pop_front();
        }

        //then 
        int element = v[i];
        while(!dq.empty() && element >= v[dq.back()]){
            dq.pop_back();
        }
        


        while(!dq2.empty() && element <= v[dq2.back()]){
            dq2.pop_back();
        }
        dq.push_back(i);
        dq2.push_back(i);

        ans += v[dq.front()] + v[dq2.front()];
    }

    return ans;
}


int main(){
    vector<int> v= {2, 5, -1, 7, 3, -1, 2};
    int k = 4;
    cout<<sumOfMinMaxOfAllWindowOfSizeK(v, k)<<endl;
    return 0;
}