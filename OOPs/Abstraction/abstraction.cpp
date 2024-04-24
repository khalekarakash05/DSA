#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main(){
    // Abstraction
    vector<int> v={4,5,2,3,1};
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" "<<endl;
    }
    return 0;
}
