#include<iostream>
#include<vector>
using namespace std;

vector<int> insertionSort(vector<int>v, int n){
    for(int i =1; i<n; i++){
    int key = v[i];
    int j = i-1;

    while(j>=0 && v[j] > key){
        v[j+1] = v[j];
        j--;
    }
    //last me jo key hamne store ki hai us key ko daldo
    v[j+1] = key;
    }

    return v;
}

int main(){
    vector<int> v = {44, 33,55, 22, 11};
    int n = v.size();
    
    vector<int>ans;
    ans = insertionSort(v, n);
    for(int i =0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;

}