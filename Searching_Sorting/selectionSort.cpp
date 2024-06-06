#include<iostream>
#include<vector>
using namespace std;

vector<int> selectionSort(vector<int>v, int n){
    
    for(int i = 0; i<n-1; i++){
        int minIndex = i;
        for(int j = i+1; j<n; j++){
            if(v[j] < v[minIndex]){
                minIndex = j;
            }
        }
        swap(v[i], v[minIndex]);
    }
    return v;
}

int main(){
    vector<int>v = {44, 33, 22, 11};
    int n = v.size();

    vector<int>ans;
    
    ans = selectionSort(v, n);
    for(int i = 0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;


    return 0;
}