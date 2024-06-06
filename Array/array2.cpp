#include<iostream>
using namespace std;

void sort0sAnd1s(int arr[], int size){
    int zeroCount = 0;
    int onesCount  = 0;
    for(int i = 0; i<size; i++){
        if(arr[i] == 0){
            zeroCount++;
        }
        else{
            onesCount++;
        }
    }

    int j =0;
    while(zeroCount--){
        arr[j] = 0;
        j++;
    }
    while (onesCount--)
    {
        arr[j] = 1;
        j++;
    }

    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}

void shiftArray(int arr[], int size) {
    // Edge case: If array size is less than 2, no need to shift
    if (size < 2) return;

    // Save the last element
    int last = arr[size - 1];

    // Shift all elements to the right by 1
    for (int i = size - 1; i > 0; --i) {
        arr[i] = arr[i - 1];
    }

    // Place the last element at the first position
    arr[0] = last;


    for(int i =0;i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main(){
    // int arr[] = {0, 1, 0, 1, 1, 0, 0, 0, 0};
    int arr[] = {10, 20, 30, 40, 50, 60};

    int size = sizeof(arr)/sizeof(int);

    // sort0sAnd1s(arr, size);

    shiftArray(arr, size);


    return 0;
}