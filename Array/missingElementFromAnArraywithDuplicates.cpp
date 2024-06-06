#include<iostream>
#include<vector>
using namespace std;

vector<int> missingElement(int arr[], int n){
    for(int i =0 ; i<n; i++){
        int index = abs(arr[i]);
        if(arr[(index-1)] > 0){
            arr[index-1] = arr[index-1]*(-1);
        }
    }

    // for(int i = 0; i< n; i++){
    //     cout<<arr[i]<<" ";
    // }
    vector<int>v;
    for(int i = 0; i<n;i++){
        if(arr[i] > 0){
            v.push_back(i+1);
        }
    }


    return v;
}

vector<int> anotherApproach(int arr[], int n){
    //by using sort and swap
    int i = 0;
    while(i<n){
        int index = arr[i]-1;
        if(arr[i] != arr[index]){
            swap(arr[i], arr[index]);
        }
        else{
            i++;
        }
    }
    vector<int>v;
    for(int i = 0; i<n; i++){
        if(arr[i] != i+1){
            v.push_back(i+1);
        }
    }
    return v;
}
int main(){
    int arr[] = {5,3, 3, 3,1};
    int n = sizeof(arr)/sizeof(int);

    vector<int>ans;
    //  ans = missingElement(arr, n);
    ans = anotherApproach(arr,n);
    cout<<"missing element in an array containing duplicate elements is ";
    for(int i = 0; i<ans.size(); i++){
        cout<<ans[i]<<' ';
    }
    cout<<endl;
    // missingElement(arr, n);
    return 0;
}