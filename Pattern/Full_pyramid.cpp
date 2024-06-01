#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the no of rows you have to print the pattern"<<endl;
    cin>>n;
    for(int row = 0; row<n; row++){
        for(int j = 0; j<n-row-1; j++){
            cout<<" ";
        }
        for(int i = 0; i<row+1; i++){
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}