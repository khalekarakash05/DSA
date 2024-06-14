#include<iostream>
#include<deque>
using namespace std;



void firstNegativeInteger(int arr[], int size, int k){
    deque<int>dq;
    //first step => process first k elements of first window
    for(int i = 0; i<k; i++){
        int element = arr[i];
        if(element < 0){
            dq.push_back(i);
        }
    }

    //now process remaining windows
    //first check removal of element and then add
    for(int i = k; i<size; i++){
        if(dq.empty()){
            cout<<"no -ve element present in the window"<<endl;
        }
        else{
            cout<<arr[dq.front()]<<endl;
        }

        //now check removal condition
        if((i-dq.front()) >= k){
            //then it is out of windwo remove it
            dq.pop_front();
        }

        //now add 
        if(arr[i] < 0){
            dq.push_back(i);
        }
    }

    //print the first negative element in the last window
    if(dq.empty()){
        cout<<"0"<<endl;
        cout<<"no negative element present in the given window "<<endl;
    }
    else{
        cout<<arr[dq.front()]<<endl;
    }
}



int main(){
    int arr[] = {2, -5, 4, -1, -2, 0, 5};
    int size = sizeof(arr)/sizeof(int);
    // cout<<"hello jee"<<endl;
    int k = 3;
    firstNegativeInteger(arr, size, k);
    return 0;
}