#include<iostream>
#include<vector>
using namespace std;

vector<int> bubblesort(vector<int>v , int n){
    for(int i = 0; i<n-1; i++){
        for(int j = 0; j<n-i-1; j++){
            if(v[j] > v[j+1]){
                swap(v[j], v[j+1]);

            }
        }
    }

    
    return v;
}

int main(){

    vector<int>v={5, 4, 3, 2, 1};
    int n = v.size();

    vector<int>vectors;
    vectors =  bubblesort(v, n);
    

    //let's print the sorted array
    for(int i = 0; i<vectors.size(); i++){
        cout<<vectors[i]<<" ";
    }
    cout<<endl;
    return 0;
}