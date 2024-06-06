#include<iostream>
using namespace std;


int binarySearchInNearlySortedArray(int arr[], int size, int target){
    int s = 0;
    int e = size-1;

    while(s<=e){
        int mid = s+(e-s)/2;

        if(arr[mid] == target){
            return mid;
        }
        else if(arr[mid-1] == target){
            return mid-1;
        }
        else if(arr[mid+1] == target){
            return mid+1;
        }
        else if(arr[mid] < target){
            s = mid+2;
        }
        else {
            e = mid-2;
        }
    }
    return -1;

}

int main(){
    int arr[] = {20, 10, 30, 50, 40 ,70, 60};
    int size = sizeof(arr)/sizeof(int);

    int target = 70;
    int ans = binarySearchInNearlySortedArray(arr, size, target);
    cout<<"ans is : "<<ans<<endl;

    return 0;
}