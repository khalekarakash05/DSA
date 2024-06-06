#include<iostream>
#include<vector>
using namespace std;

void martixWavePrint(vector<vector<int>>v){
    int m = v.size();
    int n = v[0].size();

    for(int startCol = 0; startCol <n; startCol++){
        //even col ke liye top to bottom print karna hai
        if((startCol & 1)== 0){
            for(int i = 0; i<m; i++){
                cout<<v[i][startCol]<<" ";
            }
            // cout<<endl;
        }
        else {
            //odd col ke liye bottom to top print karna hai
            for(int i = m-1; i>=0; i--){
                cout<<v[i][startCol]<<" ";
            }
            // cout<<endl;
        }
    }
}

int main(){
    vector<vector<int>>v = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    martixWavePrint(v);

    return 0;
}