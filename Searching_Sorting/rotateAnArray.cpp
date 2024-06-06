#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;

void rotateArray(int arr[], int size, int k){
    //algorithm 
    k = k%size;
    // 1. first reverse all the array
    reverse(arr , arr+size);

    //2. then reverse from begin element to kth 
    reverse(arr, arr+k);

    //3. then reverse from arr+k to end 
    reverse(arr+k, arr+size);


    //lets print the rotated array 
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void rotateArrayAnotherWay(int arr[], int size, int k ){
    //there is formula to rotate the array is (i+k)%n
    // int temp[size];
    vector<int>temp(size);
    for(int i = 0; i<size; i++){
        int index = (i+k)%size;
        temp[index] = arr[i];
    }

    for(int i = 0; i<size; i++){
        cout<<temp[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[] = {1,2, 3, 4,5,6, 7};
    int size = sizeof(arr)/sizeof(int);
    int k = 3;

    rotateArray(arr, size, k);
    // rotateArrayAnotherWay(arr, size, k);
    return 0;
}