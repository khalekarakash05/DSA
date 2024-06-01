#include<iostream>
#include<climits>
using namespace std;

int minimumOfArray(int arr[], int size){
    int ans = INT_MAX;
    for(int i = 0; i<size; i++){
        if(arr[i] < ans){
            ans = arr[i];

        }
    }
    return ans;

}

void reverseArray(int arr[], int size){
    int left = 0;
    int right = size-1;

    while(left <= right){
        swap(arr[left], arr[right]);
        left++;
        right--;
    }

}
void printArray(int arr[], int size){
    cout<<"array after reversed is "<<endl;
    for(int i =0; i<size; i++){
        
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

//print extreme point in an array
void extremePointInArray(int arr[], int size){
    int left = 0;
    int right = size-1;

    while(left<= right){
        if(left == right){
            cout<<arr[left];
        }
        else{
            cout<<arr[left]<<" "<<arr[right]<<" ";
        
        }
        left++;
        right--;
    }
    cout<<endl;
}


//find the unique element of an array
void uniqueElementOfArray(int arr[], int size){
    int result = 0;
    for(int i =0; i<size; i++){
        result = result ^ arr[i];
    }
    cout<<"unique element in an array is "<<result<<endl;
}


//print all the triplets from an array
void tripletsOfArray(int arr[], int size){
    for(int i =0; i<size;i++){
        for(int j = 0; j<size; j++){
            for(int k = 0; k<size; k++){
                cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<" "<<endl;
            }
        }
    }
}

int main(){
    // int arr[] = {10, 2, 4,6,1,5,4};
    // int arr[] = {2, 10, 11, 13, 10, 2, 15, 13, 15};
    int arr[] = {1, 2,3,4};
    int size = sizeof(arr)/sizeof(int);
    
    // int ans = minimumOfArray(arr, size);
    // cout<<"minimum no in an array is : "<<ans<<endl;

    // reverseArray(arr, size);
    // printArray(arr, size);

    // extremePointInArray(arr, size);

    // uniqueElementOfArray(arr, size);

    tripletsOfArray(arr, size);
    
    return 0;
}